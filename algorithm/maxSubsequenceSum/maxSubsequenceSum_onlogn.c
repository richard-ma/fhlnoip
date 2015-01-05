/*
 * =================================================================
 *
 *       Filename:  maxSubsequenceSum_onlogn.c
 *
 *    Description:  O nlogn
 *
 *        Version:  1.0
 *        Created:  01/09/2011 08:14:45 PM
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
 *         Name:  max3
 *  Description:  
 * =============================================================================
 */
	int
max3 ( int a, int b, int c )
{
	if (a > b && a > c) {
		return a;
	} else if (b > c) {
		return b;
	} else {
		return c;
	}
}		/* -----  end of function max3  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  maxSumRec
 *  Description:  
 * =============================================================================
 */
	int
maxSumRec ( int a[], int left, int right )
{
	if (left == right) {
		if (a[left] > 0) {
			return a[left];
		} else {
			return 0;
		}
	}

	int center = (left + right) / 2;
	int maxLeftSum = maxSumRec(a, left, center);
	int maxRightSum = maxSumRec(a, center + 1, right);

	int maxLeftBorderSum = 0;
	int leftBorderSum = 0;
	for (int i = center; i >= left; i--) {
		leftBorderSum += a[i];
		if (leftBorderSum > maxLeftBorderSum) {
			maxLeftBorderSum = leftBorderSum;
		}
	}

	int maxRightBorderSum = 0;
	int rightBorderSum = 0;
	for (int j = center + 1; j <= right; j++) {
		rightBorderSum += a[j];
		if (rightBorderSum > maxRightBorderSum) {
			maxRightBorderSum = rightBorderSum;
		}
	}

	return max3(maxLeftSum, maxRightSum,
			maxLeftBorderSum + maxRightBorderSum);
}		/* -----  end of function maxSumRec  ----- */
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  
 * =============================================================================
 */
	int
main ( int argc, char *argv[] )
{
	int n, max, a[100];

	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	max = maxSumRec(a, 0, n-1);

	printf("%d\n", max);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

