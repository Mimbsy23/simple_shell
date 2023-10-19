#include "main.h"
int main(void);
/**
 * main-Entry point for the costum shell
 *
 * Return: Always returns 0.
 */
int main(void)
{
	int isati;
	size_t byte;
	char *line_read = NULL;
	char *argv[12000] = {NULL};
	int j, num_byte_read = 0;
	char *tokens = NULL;

	isati = 1;
	isati = isatty(STDIN_FILENO);
	while (1)
	{
		num_byte_read = getline(&line_read, &byte, stdin);

		if (num_byte_read == -1)
		{
			free(line_read);
			exit(0);
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
		if (argv[0] != NULL)
		{
		if (strcmp(argv[0], "exit") == 0)
		{
			free(line_read);
			exit(0);
		}
		if (strcmp(argv[0], "env") == 0)
		{
			_env();
			continue;
		}
		if (argv[0] != NULL)
		{
			/*in_built_cmd(argv);*/
			my_ppid(argv);
			if (isati == 0)
				break;
			/*	my_ppid(argv);*/
		}
		}
	}
	free(line_read);
	return (0);
}
