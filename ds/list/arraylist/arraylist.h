/*
 * $Rev: 130 $
 * $Author: richard.ma.19850509 $
 * $Date: 2010-02-23 14:50:47 +0800 (Tue, 23 Feb 2010) $
 * $URL: https://fhlnoip.googlecode.com/svn/trunk/ds/list/arraylist/arraylist.h $
 */

#ifndef _ARRAYLIST_H_
#define _ARRAYLIST_H_

#define _DEFAULTSIZE 1024

struct array_list {
	int _maxSize;
	int _listSize;
	int _fence;
	int *_array;
};

struct array_list * arraylist_create(const int);
void arraylist_free(struct array_list *);

#endif /*_ARRAYLIST_H_*/
