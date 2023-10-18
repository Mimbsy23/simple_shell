#include "main.h"

/**
 * main-Entry point for the costum shell
 *
 * Return: Always returns 0.
 */
int main(void)
{
	int isati;
	char *line_read = NULL;
	char **argv;

	isati = 1;
	isati = isatty(STDIN_FILENO);
	while (1)
	{
		if (isati != 0)
			line_read = read_lineptr();
		if (line_read == NULL)

			break;

		argv = token_func(line_read);

		if (argv != NULL)
		{
			in_built_cmd(argv);
			if (isati == 0)
				break;
			my_ppid(argv);
			free_memo(argv);
		}

		free(line_read);
	}
	return (0);
}
