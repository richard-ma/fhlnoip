/*
 * $Rev: 141 $
 * $Author: richard.ma.19850509 $
 * $Date: 2010-03-03 14:30:31 +0800 (Wed, 03 Mar 2010) $
 * $URL: https://fhlnoip.googlecode.com/svn/trunk/ds/stack/doublestack/doublestack.c $
 */

#include <stdio.h>
#include <stdlib.h>
#include "arraylist.h"
#include "doublestack.h"

struct double_stack* dstack_create(struct array_list* alptr)
{
	struct double_stack *dsptr = (struct double_stack*)malloc(sizeof(struct double_stack));

	alptr->_listSize = alptr->_maxSize;
	dsptr->_top1 = -1;
	dsptr->_top2 = alptr->_maxSize;

	return dsptr;
}

void dstack_free(struct double_stack *dsptr)
{
	if (NULL != dsptr) free(dsptr);

	return;
}

void dstack_pop1(void *ptr, void *info)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	if (0 <= dsptr->_top1) (dsptr->_top1)--;

	return;
}

void dstack_pop2(void *ptr, void *info)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	if (alptr->_maxSize > dsptr->_top2) (dsptr->_top2)++;

	return;
}

void dstack_push1(void *ptr, void *info, int val)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	if (dsptr->_top1 < dsptr->_top2 - 1) {
		(dsptr->_top1)++;
		alptr->_array[dsptr->_top1] = val;
	}

	return;
}

void dstack_push2(void *ptr, void *info, int val)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	if (dsptr->_top1 + 1 < dsptr->_top2) {
		(dsptr->_top2)--;
		alptr->_array[dsptr->_top2] = val;
	}

	return;
}

int  dstack_topValue1(void *ptr, void *info)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	int re = 0;
	if (dsptr->_top1 >= 0) {
		re = alptr->_array[dsptr->_top1];
	}

	return re;
}

int  dstack_topValue2(void *ptr, void *info)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	int re = 0;
	if (dsptr->_top1 < alptr->_listSize) {
		re = alptr->_array[dsptr->_top2];
	}

	return re;
}

int  dstack_length1(void *ptr, void *info)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	return dsptr->_top1 + 1;
}

int  dstack_length2(void *ptr, void *info)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	return alptr->_listSize - dsptr->_top2;
}

void dstack_print1(void *ptr, void *info)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	int i;
	printf("==1 TOP [%d]==\n", dsptr->_top1);
	for (i=dsptr->_top1; i>=0; i--) {
		printf("%d\n", alptr->_array[i]);
	}
	printf("==1 BOTTOM==\n");

	return;
}

void dstack_print2(void *ptr, void *info)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	int i;
	printf("==2 TOP [%d]==\n", dsptr->_top2);
	for (i=dsptr->_top2; i<alptr->_listSize; i++) {
		printf("%d\n", alptr->_array[i]);
	}
	printf("==2 BOTTOM==\n");

	return;
}

void dstack_print(void *ptr, void *info)
{
	struct array_list *alptr = (struct array_list*)ptr;
	struct double_stack *dsptr = (struct double_stack*)info;

	return;
}
