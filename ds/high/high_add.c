#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int high_max(unsigned int a, unsigned int b)
{
	return a >= b ? a : b;
}

unsigned int high_min(unsigned int a, unsigned int b)
{
	return a <= b ? a : b;
}

int high_str2int(const char *str, int *array, unsigned int *size)
{
	unsigned int len = strlen(str), i;
	array = (int*)malloc(sizeof(int) * len);
	memset(array, 0, sizeof(int) * len);

	for (i=0; i<len; i++){
		array[i] = str[i] - '0';
	}

	*size = len;

	return len;
}

int high_array_reverse(int *array, unsigned int size)
{
	unsigned int i;
	for (i=0; i<size/2; i++) {
		int tmp = array[i]; 
		array[i] = array[size-1-i];
		array[size-1-i] = tmp;
	}

	return 0;
}

int high_add(int *a, unsigned int size_a, int *b, unsigned int size_b, int *c, unsigned int *size_c)
{
	unsigned int len = high_max(size_a, size_b);
	unsigned int s_len = high_min(size_a, size_b);
	unsigned int adding = 0, i;
	c = (int*)malloc(sizeof(int) * len);
	memset(c, 0, sizeof(int) * len);

	for (i=0; i<s_len; i++) {
		c[i] = (a[i] + b[i]) % 10 + adding;
		adding = (a[i] + b[i]) / 10;
	}

	if (adding != 0) c[i] += adding;

	if (len == size_a) {
		for (i=s_len; i<len; i++) {
			c[i] += a[i];
		}
	}

	if (len == size_b) {
		for (i=s_len; i<len; i++) {
			c[i] += b[i];
		}
	}

	*size_c = len;

	return len;
}

int main(int argc, char *argv[])
{
	unsigned int i;
	int *a, *b, *c, size_a, size_b, size_c;
	char buffer[256];

	scanf("%s", buffer);
	high_str2int(buffer, a, &size_a);
	high_array_reverse(a, size_a);
/*
	scanf("%s", buffer);
	high_str2int(buffer, b, &size_b);
	high_array_reverse(b, size_b);

	high_add(a, size_a, b, size_b, c, &size_c);

	high_array_reverse(c, size_c);
	for (i=0; i<size_c; i++) printf("%d", c[i]);
	printf("\n");

*/
	free(a);
//	free(b);
//	free(c);
	return 0;
}
