#include "main.h"

/**
 * swap_int -  a function that swaps the
 * values of two integers
 *
 * @a: input integer
 * @b: input integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = b;
	b = a;
	a = c;

}
