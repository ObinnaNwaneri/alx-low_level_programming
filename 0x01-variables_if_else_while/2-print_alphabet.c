#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - a program that prints out the alphabet using putchar
 * Return: 0
 */

int main(void)
{
	int x = 'A';

	for (; x <= 'Z'; x++)
	{
		char lower = (tolower(x));
		putchar ("%c\n", lower);
	}
	return (0);
}
