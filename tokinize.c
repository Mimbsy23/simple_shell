#include "main.h"
/**
 * token_func-Tokenize a line of input into individual arguments.
 * @line_read: The input string to tokenize.
 * Return: An array of strings (arguments) or NULL if there's an issue.
 */
char **token_func(char *line_read)
{
	int j;
	char *tokens = NULL;
	static char *argv[12000] = {NULL};

	if (!argv[0])
	{
		return (NULL);
	}
	tokens = strtok(line_read, " \n\t");
	j = 0;

	while (tokens != NULL)
	{
		argv[j] =  tokens;
		j++;
		tokens = strtok(NULL, " \n\t");
	}
	argv[j] = NULL;
	return (argv);
}
