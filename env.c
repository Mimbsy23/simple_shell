#include "main.h"
/**
 * env-function prints the environmental variables
 * when called
 */

void env(void)
{

	int j;

	for (j = 0; environ[j] != NULL; j++)
	{
		write(1, environ[j], _strlen(environ[j]));
	}
	_putchar('\n');
}
