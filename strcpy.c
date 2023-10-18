#include "main.h"

/**
 * char *_strcpy-function that copies the string pointed to by src
 * @dest_na: string destination (where string will be copied)
 * @src_f:  where string will be (copied from)
 * Return: string
 */
char *_strcpy(char *dest_na, char *src_f)
{
	int i = 0;
	int x = 0;

	while (*(src_f + i) != '\0')
	{
		i++;
	}
	for (x = 0; x < i ; x++)
	{
		dest_na[x] = src_f[x];
	}
	dest_na[i] = '\0';
	return (dest_na);
}
