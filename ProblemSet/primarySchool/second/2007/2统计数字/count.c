#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int n, i, j, cnt[10];
	char s[8];
	scanf("%d", &n);

	for (i=0; i<10; i++) cnt[i] = 0;

	for (i=1; i<=n; i++) {
		sprintf(s, "%d", i);
		for (j=0; j<strlen(s); j++) {
			cnt[s[j]-'0']++;
		}
	}

	printf("%d", cnt[0]);
	for (i=1; i<10; i++) {
		printf(" %d", cnt[i]);
	}
	printf("\n");

	return 0;
}
