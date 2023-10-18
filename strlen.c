#include "main.h"
/**
* _strlen-function returns the length of a string
* @s: string to be counted
* Return: length
*/
int _strlen(char *s)
{
	int inc_rement = 0;

	while (*s != '\0')
	{
		inc_rement++;
		s++;
	}
	return (inc_rement);
}
