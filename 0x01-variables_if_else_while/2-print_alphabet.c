#include <stdio.h>

/**
 * main - a program that prints out the alphabet using putchar
 * Return: 0
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar (tolower(x));
	}
	return (0);
}
