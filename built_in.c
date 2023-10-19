#include "main.h"
/**
* in_built_cmd-function handles the built in commands.
* @argv: arrays of characters pointers.
* Return: 0 on success.
*/

int in_built_cmd(char **argv)
{
	if (strcmp(argv[0], "exit") == 0)
	{
		exit(0);
		free_memo(argv);
	}
	if (strcmp(argv[0], "env") == 0)
	{
		_env();
	}
	if (strcmp(argv[0], "cd") == 0)
	{
		if (argv[1] == NULL)
		{
			chdir(getenv("HOME"));
		}
		else
		{
			if (chdir(argv[1]) != 0)
			{
				perror("cd");
			}
		}
	}
	return (0);
}
