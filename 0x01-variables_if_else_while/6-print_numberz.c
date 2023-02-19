#include <stdlib.h>
#include <stdio.h>

/**
 * main - use putchar to prints all single digit numbers of base 10
 * Return: 0
 */

int main(void)
{
	char n = 0;

	for (; n < 10; n++)
	{
		putchar(n);
	}

	putchar ('\n');

	return (0);
}
