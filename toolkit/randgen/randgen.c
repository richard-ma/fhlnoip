#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

#include "rand.h"

#define PARAMS_STR "s:l:c:wF:f:"
#define MAX_FILE_NAME_LEN 255 
#define OPEN_FILE_TYPE_NULL 0
#define OPEN_FILE_TYPE_WRITE 2
#define OPEN_FILE_TYPE_READ	4
#define OPT_WRAP 1
#define OPT_UNWRAP 0

int open_file(FILE **fp, char filename[], int type);
void close_file(FILE **fp);
void print_err(FILE *fp, int code, char *msg);

int main(int argc, char *argv[])
{
	/* Init the random seed. */
	srand((int)time(0));

	int oc;
	char *b_opt_arg;
	int start		= 0,	/* Random number range start */
		len			= 1,	/* Random number range lenght */
		count		= 1,	/* Random number counter */
		w_flg		= OPT_UNWRAP;	/* Random number autowrap */

	char infilename[MAX_FILE_NAME_LEN]	= "",	/* Input file name */
		 outfilename[MAX_FILE_NAME_LEN]	= "";	/* Output file name */
	FILE *infile	= stdin,	/* Input file ptr, Default input file is stdin */
		 *outfile	= stdout;	/* Output file ptr, Default output file is stdout */


	while((oc = getopt(argc, argv, PARAMS_STR)) != -1) {
		switch (oc) {
			case 's':
				start = atoi(optarg);
				break;
			case 'l':
				len = atoi(optarg);
				break;
			case 'c':
				count = atoi(optarg);
				break;
			case 'w':
				w_flg = OPT_WRAP;
				break;
			case 'F':
				strcpy(infilename, optarg);
				break;
			case 'f':
				strcpy(outfilename, optarg);
				break;
			case ':':
				printf("expect params.\n");
				break;
			case '?':
				printf("invaild params.\n");
				break;
		}
	}

	/* Set the input and output file */
	if (-1 == open_file(&infile, infilename, OPEN_FILE_TYPE_READ)) {
		print_err(stdout, -1, "Cann't open input file.");
		return -1;
	}
	if (-1 == open_file(&outfile, outfilename, OPEN_FILE_TYPE_WRITE)) {
		print_err(stdout, -1, "Cann't open output file.");
		return -1;
	}

	/* TODO: Read settings from input file */

	/* Output random number to output file */
	int i;
	fprintf(outfile, "%d\n", count);
	if (OPT_WRAP == w_flg) {
		/* Random number autowrap */
		for (i=0; i<count; i++) {
			fprintf(outfile, "%d\n", rand_random(start, len));
		}
	} else {
		/* Random number in one line */
		fprintf(outfile, "%d", rand_random(start, len));
		for (i=0; i<count-1; i++) {
			fprintf(outfile, " %d", rand_random(start, len));
		}
		fprintf(outfile, "\n");
	}
	
	close_file(&infile);
	close_file(&outfile);

	return 0;
}

int open_file(FILE **fp, char filename[], int type)
{
	if (0 == strcmp(filename, "")) {
		return 0;
	} else if (OPEN_FILE_TYPE_READ == type && NULL != (*fp = fopen(filename, "r"))) {
		return 0;
	} else if (OPEN_FILE_TYPE_WRITE == type && NULL != (*fp = fopen(filename, "w"))) {
		*fp = fopen(filename, "w");
		return 0;
	} else if (OPEN_FILE_TYPE_NULL == type && NULL != (*fp = fopen(filename, "rw"))) {
		return 0;
	}

	return -1;
}

void close_file(FILE **fp)
{
	fclose(*fp);
}

void print_err(FILE *fp, int code, char *msg)
{
	fprintf(fp, "[ERROR:%d]: %s", code, msg);
}
