#include "main.h"
/**
 * token_func-Tokenize a line of input into individual arguments.
 * @line_read: The input string to tokenize.
 * Return: An array of strings (arguments) or NULL if there's an issue.
 */
char **token_func(char *line_read)
{
	int j;
	char *tokens;
	char **argv;

	argv = malloc(10 * sizeof(char *));
	if (!argv)
	{
		perror("malloc failed to allocate memory");
		return (NULL);
	}
	tokens = strtok(line_read, " \n\t");
	j = 0;

	while (tokens != NULL)
	{
		argv[j] = malloc(sizeof(char) * (_strlen(tokens) + 1));
		if (!argv[j])
		{
			perror("malloc failed to allocate memory");
			free_memo(argv);
			return (NULL);
		}
		_strcpy(argv[j], tokens);
		j++;
		tokens = strtok(NULL, " \n\t");
	}

	if (j == 0)
	{
		free_memo(argv);
		return (NULL);
	}

	argv[j] = NULL;
	return (argv);
}
