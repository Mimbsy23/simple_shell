#include "main.h"

/**
 * _putchar-function prints to the console standad output
 * @c: function parameter of char.
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
