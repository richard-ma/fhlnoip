/*
 * $Rev: 144 $
 * $Author: richard.ma.19850509 $
 * $Date: 2010-03-04 16:26:19 +0800 (Thu, 04 Mar 2010) $
 * $URL: https://fhlnoip.googlecode.com/svn/trunk/ds/queue/circlequeue/circlequeue.h $
 */

#ifndef _CIRCLEQUEUE_H_
#define _CIRCLEQUEUE_H_

#include "arraylist.h"

struct circle_queue {
	int _front;
	int _rear;
};

struct circle_queue* cqueue_create(struct array_list*);
void cqueue_free(struct circle_queue*);

void cqueue_enqueue(struct array_list*, struct circle_queue*, int);
int  cqueue_dequeue(struct array_list*, struct circle_queue*);
int  cqueue_length (struct array_list*, struct circle_queue*);

#endif /*_DOUBLESTACK_H_*/
