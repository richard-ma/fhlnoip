/*
 * =================================================================
 *
 *       Filename:  hat.c
 *
 *    Description:  小红帽
 *
 *        Version:  1.0
 *        Created:  01/05/2011 10:41:10 AM
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
	int n, tmp, i, sum, ans;

	scanf("%d", &n);
	sum = 0;
	for (i=0; i<n; i++) {
		scanf("%d", &tmp);
        if (tmp >= n) {
            printf("-1\n");
            return 0;
        }
		sum += tmp;
	}

	if (sum % (n-1) != 0 || sum / (n-1) > n) {
		/* 结果不能整除或者结果比总人数大时说明有猫咪在说谎 */
		ans = -1;
	} else {
		ans = sum / (n-1);
	}

	printf("%d\n", ans);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

