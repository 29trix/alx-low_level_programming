#include "main.h"

/**
 * swap_int - swaps the value of two ints
 * @a: int 1
 * @b: int 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
