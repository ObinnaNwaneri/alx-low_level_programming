#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that prints out the alphabet using putchar
 * Return: 0
 */

int main(void)
{
	int x = 'A';

	for (; x <= 'Z'; x++)
	{
		putchar (strlwr(x));
	}
	return (0);
}
