/*
 * $Rev: $
 * $Author: $
 * $Date: $
 * $URL: $
 */

#include <stdio.h>
#include "list.h"
#include "arraylist.h"
#include "doublestack.h"

int main(int argc, char *argv[])
{
	struct array_list *alptr = arraylist_create(0);
	struct double_stack *dsptr = dstack_create(alptr);
	int i;

	for (i=0; i<5; i++) {
		dstack_push1(alptr, dsptr, i);
	}

	for (i=0; i<5; i++) {
		dstack_push2(alptr, dsptr, i);
	}

	for (i=0; i<5; i++) {
		dstack_push1(alptr, dsptr, i);
		dstack_print1(alptr, dsptr);
		sleep(1);

		dstack_pop1(alptr, dsptr);
		dstack_print1(alptr, dsptr);
		sleep(1);

		dstack_push2(alptr, dsptr, i);
		dstack_print2(alptr, dsptr);
		sleep(1);

		dstack_pop2(alptr, dsptr);
		dstack_print2(alptr, dsptr);
		sleep(1);
	}

	printf("stack1 top vlaue: %d\n", dstack_topValue1(alptr, dsptr));
	printf("stack2 top vlaue: %d\n", dstack_topValue2(alptr, dsptr));
	printf("stack1 length: %d\n", dstack_length1(alptr, dsptr));
	printf("stack2 length: %d\n", dstack_length2(alptr, dsptr));

	dstack_free(dsptr);
	arraylist_free(alptr);

	return 0;
}
