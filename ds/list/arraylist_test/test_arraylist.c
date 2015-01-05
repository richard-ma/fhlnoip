/*
 * $Rev: 137 $
 * $Author: richard.ma.19850509 $
 * $Date: 2010-03-02 21:21:48 +0800 (Tue, 02 Mar 2010) $
 * $URL: https://fhlnoip.googlecode.com/svn/trunk/ds/list/arraylist_test/test_arraylist.c $
 */

#include <stdio.h>
#include "list.h"
#include "arraylist.h"

int main(int argc, char *argv[])
{
	struct array_list *list = arraylist_create(0);

	int i;
	for (i=1; i<=10; i++) {
		list_append(list, 10 - i);
	}
	list_print(list);

	for (i=1; i<=10; i++) {
		list_next(list);
		list_print(list);
		sleep(1);
	}
	for (i=1; i<=10; i++) {
		list_prev(list);
		list_print(list);
		sleep(1);
	}

	list_setEnd(list);
	list_print(list);
	sleep(1);
	list_setStart(list);
	list_print(list);
	sleep(1);

	list_setPos(list, 5);
	list_print(list);
	sleep(1);

	printf("====%d\n", list_getValue(list, 3));
	sleep(1);

	list_remove(list, 1);
	list_print(list);
	sleep(1);
	list_remove(list, 9);
	list_print(list);
	sleep(1);
	
	list_insert(list, 1, 32);
	list_print(list);
	sleep(1);
	list_insert(list, 9, 64);
	list_print(list);
	sleep(1);
	list_insert(list, 0, 128);
	list_print(list);
	sleep(1);

	list_clear(list);
	list_print(list);
	sleep(1);

	arraylist_free(list);

	return 0;
}
