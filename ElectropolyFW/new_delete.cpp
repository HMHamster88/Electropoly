/*
 * new_delete.cpp
 *
 * Created: 21.04.2015 18:28:30
 *  Author: user
 */ 

#include <stdlib.h>

void * operator new(size_t n)
{
	void * const p = malloc(n);
	// handle p == 0
	return p;
}

void operator delete(void * p)
{
	free(p);
}
