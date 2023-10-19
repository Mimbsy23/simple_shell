#include "main.h"

/**
* read_lineptr-function reads a line of input from the user
* in stdin.
* Return: A dynamically allocated string containing the
* user's input that mut be freed at the end.
*/
char *read_lineptr(void)
{
	char *line_read = NULL;
	size_t byte = 0;
	ssize_t num_byte_read;

	_putchar('$');
	_putchar(' ');

	num_byte_read = getline(&line_read, &byte, stdin);

	if (num_byte_read == -1)
	{
		free(line_read);
		exit(0);
	}
	return (line_read);
}
