/*
 * =================================================================
 *
 *       Filename:  tape.c
 *
 *    Description:  纸带
 *
 *        Version:  1.0
 *        Created:  01/05/2011 01:29:14 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Richard Ma (richard_ma), richard.ma.19850509@gmail.com
 *        Company:  Feng Huli Primary School
 *
 * =================================================================
 */


#include	<stdlib.h>
#include	<stdio.h>

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  
 * =============================================================================
 */
	int
main ( int argc, char *argv[] )
{
	int n, i, j, k, max, a[100], sum;

	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	max = a[0];
	for (i=1; i<=n; i++) {
		for (j=0; j<n-i+1; j++) {
			sum = 0;
			for (k=j; k<j+i; k++) {
				sum += a[k];
			}
			if (sum > max) {
				max = sum;
			}
		}
	}

	/* 装饰效果为负值，装饰效果显示0，即放弃使用纸带 */
	if (max < 0) max = 0;

	printf("%d\n", max);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

