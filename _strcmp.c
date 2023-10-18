#include "main.h"
/**
 * _strcmp - ===============
 * @a1: =============
 * @a2: ==============
 * Return: ==========
 */
int _strcmp(char *a1, char *a2)
{
	while (*a1 && *a2)
	{
		if (*a1 != *a2)
			return (*a1 - *a2);
		a1++;
		a2++;
	}
	if (*a1 == *a2)
		return (0);

	else
		return (*a1 < *a2 ? -1 : 1);
}
