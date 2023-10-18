#include "main.h"

/**
* _strcmp-function compare string values
* @s1: first strng to be compared with
* @s2: second string to be compared with
* Return: s1[i] - s2[i]
*/

int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
		k++;
	}
	return (0);
}
