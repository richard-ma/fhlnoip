/*
 * $Rev: 131 $
 * $Author: richard.ma.19850509 $
 * $Date: 2010-02-23 20:57:03 +0800 (Tue, 23 Feb 2010) $
 * $URL: https://fhlnoip.googlecode.com/svn/trunk/ds/list/linklist/linklist.h $
 */

#ifndef _LINKLIST_H_
#define _LINKLIST_H_

struct link_list_node {
	int _data;
	struct link_list_node *_next;
};

struct link_list {
	int _listSize;
	int _fence;
	struct link_list_node *_head;
};

struct link_list* linklist_create();
void linklist_free(struct link_list *);

#endif /*_LINKLIST_H_*/
