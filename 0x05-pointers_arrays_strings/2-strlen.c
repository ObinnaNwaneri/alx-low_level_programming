#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: input string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length;

	length = sizeof(*s) / sizeof(*s[0]);

	return (length);

}
