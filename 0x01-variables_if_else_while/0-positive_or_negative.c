#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints the last digit of a number.
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastNumber;

	lastNumbner = n % 10

	if (lastNumber > 0)
	{
		printf("is positive");
	} else if (lastNumber == 0)
	{
		printf("is zero");
	} else
	{
		printf("is negative");
	}
	return (0);
}
