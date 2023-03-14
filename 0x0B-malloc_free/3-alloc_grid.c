#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 *
 * @width: input width
 * @height: input height
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
  int i, j;
  int *ptr = NULL;

  if (width <= 0 || height <= 0)
    return (NULL);

  ptr = (int *)malloc(width * height * sizeof(int));

  for (i = 0; i < width * height; i++)
    {
    }

  return (ptr);
}