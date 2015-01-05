/*
 * $Rev: 130 $
 * $Author: richard.ma.19850509 $
 * $Date: 2010-02-23 14:50:47 +0800 (Tue, 23 Feb 2010) $
 * $URL: https://fhlnoip.googlecode.com/svn/trunk/ds/list/arraylist/arraylist.c $
 */

#include <stdio.h>
#include <stdlib.h>
#include "../list.h"
#include "arraylist.h"

struct array_list* arraylist_create(const int size)
{
	int _size;
	if (0 >= size) _size = _DEFAULTSIZE;
	else _size = size;

	struct array_list *list = (struct array_list*)malloc(sizeof(struct array_list));

	int *array = (int *)malloc(sizeof(int) * (_size + 1));
	list->_array = array;

	list->_maxSize 	= _size;
	list->_listSize = 0;
	list->_fence 	= 0;

	return list;
}

void arraylist_free(struct array_list *list) {
	if (NULL != list) {
		if (NULL != list->_array) {
			free(list->_array);
		}
		free(list);
	}

	return;
}

void list_clear(void *list)
{
	struct array_list *alptr = (struct array_list*)list;
	alptr->_listSize = 0;
	alptr->_fence 	= 0;

	return;
}

int list_insert(void *list, const int pos, const int elem)
{
	struct array_list *alptr = (struct array_list*)list;
	if (pos <= alptr->_listSize && pos >= 0) {
		if (pos != alptr->_listSize) {
			int i = alptr->_listSize + 1; 
			for (; i>pos+1; i--) {
				alptr->_array[i] = alptr->_array[i-1];
			}
		}
		alptr->_array[pos+1] = elem;
		/* Update list size. */
		(alptr->_listSize)++;
		/* Reset the fence. */
		list_setStart(list);

		return 0;
	} else {
		return -1;
	}
}

int list_append(void *list, const int elem)
{
	struct array_list *alptr = (struct array_list*)list;
	if (alptr->_listSize < alptr->_maxSize - 1) {
		(alptr->_listSize)++;
		alptr->_array[alptr->_listSize] = elem;

		return 0;
	} else {
		return -1;
	}
}

int list_remove(void *list, int pos)
{
	struct array_list *alptr = (struct array_list*)list;
	if (pos <= alptr->_listSize && pos >= 1) {
		if (pos != alptr->_listSize) {
			int i = pos;
			for (; i<alptr->_listSize; i++) {
				alptr->_array[i] = alptr->_array[i+1];
			}
		}
		/* Update list size. */
		(alptr->_listSize)--;
		/* Reset the fence. */
		list_setStart(list);
		
		return 0;
	} else {
		return -1;
	}

}

void list_setStart(void *list)
{
	struct array_list *alptr = (struct array_list*)list;
	alptr->_fence = 0;

	return;
}

void list_setEnd(void *list)
{
	struct array_list *alptr = (struct array_list*)list;
	if (alptr->_listSize > 0) alptr->_fence = alptr->_listSize;

	return;
}

void list_prev(void *list)
{
	struct array_list *alptr = (struct array_list*)list;
	if (alptr->_fence > 0) (alptr->_fence)--;

	return;
}

void list_next(void *list)
{
	struct array_list *alptr = (struct array_list*)list;
	if (alptr->_fence <= alptr->_listSize) (alptr->_fence)++;

	return;
}

int  list_leftLength(void *list)
{
	struct array_list *alptr = (struct array_list*)list;
	return alptr->_fence;
}

int  list_rightLength(void *list)
{
	struct array_list *alptr = (struct array_list*)list;
	return alptr->_listSize - alptr->_fence;
}

int list_setPos(void *list, int pos)
{
	struct array_list *alptr = (struct array_list*)list;
	if (pos <= alptr->_listSize && pos >= 0) {
		alptr->_fence = pos;

		return 0;
	} else {
		return -1;
	}
}

int list_getValue(void *list, int pos)
{
	struct array_list *alptr = (struct array_list*)list;
	if (pos <= alptr->_listSize && pos >= 1) {
		return alptr->_array[pos];
	} else {
		return -1;
	}
}

void list_print(void *list)
{
	int i;
	struct array_list *alptr = (struct array_list*)list;
	printf("Ptr: %p\n", alptr);
	printf("maxSize: %d, listSize: %d, fence: %d, lcnt: %d, rcnt: %d\n", alptr->_maxSize, alptr->_listSize, alptr->_fence, list_leftLength(list), list_rightLength(list));
	for (i=1; i<=alptr->_listSize; i++) {
		if (alptr->_fence == i) printf("->");
		else printf("  ");
		printf("[%d]: %d\n", i, alptr->_array[i]);
	}
}

