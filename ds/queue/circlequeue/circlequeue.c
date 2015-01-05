/*
 * $Rev: 144 $
 * $Author: richard.ma.19850509 $
 * $Date: 2010-03-04 16:26:19 +0800 (Thu, 04 Mar 2010) $
 * $URL: https://fhlnoip.googlecode.com/svn/trunk/ds/queue/circlequeue/circlequeue.c $
 */

#include <stdio.h>
#include <stdlib.h>
#include "arraylist.h"
#include "circlequeue.h"

struct circle_queue* cqueue_create(struct array_list *alptr)
{
	struct circle_queue *cqptr = (struct circle_queue*)malloc(sizeof(struct circle_queue));
	
	cqptr->_front = 0;
	cqptr->_rear  = 0;
	alptr->_listSize = alptr->_maxSize;

	return cqptr;
}

void cqueue_free(struct circle_queue *cqptr)
{
	free(cqptr);

	return;
}

void cqueue_enqueue(struct array_list *alptr, struct circle_queue *cqptr, int val)
{
}

int  cqueue_dequeue(struct array_list *alptr, struct circle_queue *cqptr)
{
}

int  cqueue_length (struct array_list *alptr, struct circle_queue *cqptr)
{
}
