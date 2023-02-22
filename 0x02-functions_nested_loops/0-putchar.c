#include "main.h"


int main(void)
{
	char *x = "_putchar";

	while (*x)
	{
		print_out(x);
		x++;
	}
	print_out('\n');

	return (0);
}
