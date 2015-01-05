/*
 * $Rev: $
 * $Author: $
 * $Date: $
 * $URL: $
 */

#include <stdio.h>
#include "list.h"
#include "arraylist.h"
#include "circlequeue.h"

int main(int argc, char *argv[])
{
	struct array_list *alptr = arraylist_create(0);

	arraylist_free(alptr);

	return 0;
}
