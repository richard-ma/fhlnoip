#include "rand.h"

int rand_random(int start, int len)
{
	return (rand() % len) + start;
}
