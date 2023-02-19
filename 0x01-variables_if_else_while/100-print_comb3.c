#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	int n;

	for (n = 0; n < 10; n++)
	{
		for (n = 0; n < 10; n++)
		{
			if (number[n] != '00', '11, '22', '33', '44', '55',
					'66', '77', '88', '99')
			{
				putchar(number[n]);

				if (number[n] != '99')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar ('\n');

	return (0);
}
