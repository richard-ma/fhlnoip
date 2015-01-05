/*
 * $Rev: 131 $
 * $Author: richard.ma.19850509 $
 * $Date: 2010-02-23 20:57:03 +0800 (Tue, 23 Feb 2010) $
 * $URL: https://fhlnoip.googlecode.com/svn/trunk/ds/list/linklist/linklist.c $
 */

#include <stdio.h>
#include <stdlib.h>
#include "../list.h"
#include "linklist.h"

struct link_list_node* _linklist_create_node()
{
	struct link_list_node *node = (struct link_list_node*)malloc(sizeof(struct link_list_node));
	node->_data = 0;
	node->_next = NULL;

	return node;
}

struct link_list_node* _find(struct link_list *llptr, int pos)
{
	struct link_list_node *ptr = llptr->_head;
	int i;
	if (pos <= llptr->_listSize && pos >= 0) {
		for (i=1; i<=pos; i++) {
			ptr = ptr->_next;
		}

		return ptr;
	} else {
		return llptr->_head;
	}
}

struct link_list* linklist_create()
{
	struct link_list_node *node = _linklist_create_node();

	struct link_list *list = (struct link_list*)malloc(sizeof(struct link_list));

	list->_listSize = 0;
	list->_fence	= 0;
	list->_head		= node;

	return list;
}

void _linklist_free_node(struct link_list_node *node)
{
	if (NULL != node->_next) {
		_linklist_free_node(node->_next);
		node->_next == NULL;
	}

	free(node);

	return;
}

void linklist_free(struct link_list *list)
{
	if (NULL != list) {
		if (NULL != list->_head->_next) _linklist_free_node(list->_head->_next);
		free(list->_head);
		free(list);
	}
	
	return;
}

void list_clear(void *list)
{
	struct link_list *llptr = (struct link_list*)list;
	if (NULL != llptr->_head->_next) _linklist_free_node(llptr->_head->_next);
	
	llptr->_head->_next = NULL;
	llptr->_listSize = 0;
	llptr->_fence	 = 0;

	return;
}

int  list_insert(void *list, const int pos, const int elem)
{
	struct link_list *llptr = (struct link_list*)list;

	struct link_list_node *new_node = (struct link_list_node*)malloc(sizeof(struct link_list_node));
	new_node->_data = elem;

	struct link_list_node *ptr = _find(llptr, pos);
	new_node->_next = ptr->_next;
	ptr->_next = new_node;

	/* Update list size. */
	(llptr->_listSize)++;
	/* Reset the fence. */
	list_setStart(list);

	return 0;
}

int  list_append(void *list, const int elem)
{
	struct link_list *llptr = (struct link_list*)list;

	struct link_list_node *new_node = (struct link_list_node*)malloc(sizeof(struct link_list_node));
	new_node->_data = elem;
	new_node->_next = NULL;

	struct link_list_node *ptr = llptr->_head;
	while (NULL != ptr->_next) {
		ptr = ptr->_next;
	}

	/* Appending the node. */
	ptr->_next = new_node;
	/* Update list size. */
	(llptr->_listSize)++;

	return 0;
}

int list_remove(void *list, int pos)
{
	struct link_list *llptr = (struct link_list*)list;

	struct link_list_node *prev_ptr = _find(llptr, pos-1);
	struct link_list_node *curr_ptr = prev_ptr->_next;
	if (curr_ptr != NULL) {
		prev_ptr->_next = curr_ptr->_next;
		free(curr_ptr);

		/* Update list size. */
		(llptr->_listSize)--;
		/* Reset the fence. */
		list_setStart(list);

		return 0;
	} else {
		return -1;
	}
}

void list_setStart(void *list)
{
	struct link_list *llptr = (struct link_list*)list;
	llptr->_fence = 0;

	return;
}

void list_setEnd(void *list)
{
	struct link_list *llptr = (struct link_list*)list;
	if (llptr->_listSize > 0) llptr->_fence = llptr->_listSize;

	return;
}

void list_prev(void *list)
{
	struct link_list *llptr = (struct link_list*)list;
	if (llptr->_fence > 0) (llptr->_fence)--;

	return;
}

void list_next(void *list)
{
	struct link_list *llptr = (struct link_list*)list;
	if (llptr->_fence <= llptr->_listSize) (llptr->_fence)++;

	return;
}

int  list_leftLength(void *list)
{
	struct link_list *llptr = (struct link_list*)list;
	return llptr->_fence;
}

int  list_rightLength(void *list)
{
	struct link_list *llptr = (struct link_list*)list;
	return llptr->_listSize - llptr->_fence;
}

int  list_setPos(void *list, int pos)
{
	struct link_list *llptr = (struct link_list*)list;
	if (pos <= llptr->_listSize && pos >= 0) {
		llptr->_fence = pos;

		return 0;
	} else {
		return -1;
	}
}

int  list_getValue(void *list, int pos)
{
	struct link_list *llptr = (struct link_list*)list;
	if (pos <= llptr->_listSize && pos >= 1) {
		struct link_list_node *ptr = _find(llptr, pos);
		return ptr->_data;
	} else {
		return -1;
	}
}

void list_print(void *list)
{
	struct link_list *llptr = (struct link_list*)list;

	printf("Ptr: %p\n", llptr);
	printf("listSize: %d, fence: %d, lcnt: %d, rcnt: %d\n", llptr->_listSize, llptr->_fence, list_leftLength(list), list_rightLength(list));
	struct link_list_node *ptr = llptr->_head->_next;
	int i=1;
	while (NULL != ptr) {
		if (i == llptr->_fence) {
			printf("->");
		} else {
			printf("  ");
		}
		printf("[%d:%p]: %d\n", i, ptr, ptr->_data);
		ptr = ptr->_next; i++;
	}
}

