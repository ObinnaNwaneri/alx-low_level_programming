#include <unistd.h>

/**
 * _putchar - puts a char
 *
 * @c: input argument
 *
 * Return: the character to write to stdout.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
