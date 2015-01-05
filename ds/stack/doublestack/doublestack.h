/*
 * $Rev: 141 $
 * $Author: richard.ma.19850509 $
 * $Date: 2010-03-03 14:30:31 +0800 (Wed, 03 Mar 2010) $
 * $URL: https://fhlnoip.googlecode.com/svn/trunk/ds/stack/doublestack/doublestack.h $
 */

#ifndef _DOUBLESTACK_H_
#define _DOUBLESTACK_H_

#include "arraylist.h"

struct double_stack {
	int _top1;
	int _top2;
};

struct double_stack* dstack_create(struct array_list*);
void dstack_free(struct double_stack *);

void dstack_pop1(void *, void *);
void dstack_pop2(void *, void *);
void dstack_push1(void *, void *, int);
void dstack_push2(void *, void *, int);
int  dstack_topValue1(void *, void *);
int  dstack_topValue2(void *, void *);
int  dstack_length1(void *, void *);
int  dstack_length2(void *, void *);
void dstack_print1(void *, void *);
void dstack_print2(void *, void *);
void dstack_print(void *, void *);

#endif /*_DOUBLESTACK_H_*/
