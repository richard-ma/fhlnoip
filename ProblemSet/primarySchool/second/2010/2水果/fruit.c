/*
 * =================================================================
 *
 *       Filename:  fruit.c
 *
 *    Description:  水果
 *
 *        Version:  1.0
 *        Created:  01/05/2011 11:04:57 AM
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
	int tmp, ans, i;

	ans = 0;
	for (i=0; i<3; i++) {
		scanf("%d", &tmp);
		tmp--;
		ans += tmp; 
	}
	ans++;

	printf("%d\n", ans);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

