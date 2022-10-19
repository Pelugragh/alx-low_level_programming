#include "main.h"

/**
 * _islower - check if a char is lowercase
 * @c: is the char to be checked
 * Return: if char is lowercase, otherwise 0
 */

void int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
