#include "main.h"

/**
 * free_memo-function frees memory allocated to argv
 * @argv: arraays of strings.
 * Return: Nothing
 */
void free_memo(char **argv)
{
	int j;

	if (argv == NULL)
		return;
	j = 0;
	for (j = 0; argv[j]; j++)
	{
		if (argv[j] != NULL)
		{
			free(argv[j]);
		}
	}
	if (argv != NULL)
		free(argv);
}
