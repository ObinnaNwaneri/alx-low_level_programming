#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 *
 * @size: total units
 * @c: input character
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
  unsigned int i;

  if (size == 0)
      return (NULL);

  char *s = (char*)malloc(size * sizeof(char));

  for (i = 0; i < size; i++)
    s[i] = c;

  return (s);
}
