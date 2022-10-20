#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *		 in order seperated bya comma followed by a space.
 * @n: The numberto begin counting at.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
