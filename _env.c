#include "main.h"
/**
 * _env-function prints the environmental variables
 * when called
 */

void _env(void)
{

	int j;

	for (j = 0; environ[j] != NULL; j++)
	{
		write(1, environ[j], strlen(environ[j]));
		_putchar('\n');
	}
}
