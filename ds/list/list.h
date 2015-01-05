/*
 * $Rev: 130 $
 * $Author: richard.ma.19850509 $
 * $Date: 2010-02-23 14:50:47 +0800 (Tue, 23 Feb 2010) $
 * $URL: https://fhlnoip.googlecode.com/svn/trunk/ds/list/list.h $
 */

#ifndef _LIST_H_
#define _LIST_H_

void list_clear(void *);
int  list_insert(void *, const int, const int);
int  list_append(void *, const int);
int  list_remove(void *, int);
void list_setStart(void *);
void list_setEnd(void *);
void list_prev(void *);
void list_next(void *);
int  list_leftLength(void *);
int  list_rightLength(void *);
int  list_setPos(void *, int);
int  list_getValue(void *, int);
void list_print(void *);

#endif /*_LIST_H_*/
