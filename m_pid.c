#include "main.h"
/**
 * my_ppid-function executes command if its's found using
 * child's process.
 * @argv: arrays of commands to be executed when found
 */

void my_ppid(char **argv)
{
	int rett;
	pid_t process_id;

	process_id = fork();
	if (process_id == 0)
	{
		char *commands_in_paths[] = {"ls", "pwd", "cat", NULL};
		char *locate_commands_paths[] = {"/bin/ls", "/bin/pwd", "/bin/cat", NULL};
		int f;

		for (f = 0; commands_in_paths[f] != NULL; f++)
		{
			if (_strcmp(argv[0], commands_in_paths[f]) == 0)
			{
				execve(locate_commands_paths[f], argv, environ);
				perror("./hsh: no command found");
				exit(EXIT_FAILURE);
			}
		}
		execve(argv[0], argv, environ);
		perror("./hsh: no command found");
		exit(EXIT_FAILURE);
	}
	else if (process_id < 0)
	{
		perror("./hsh: no command found");
	}
	else
	{
		wait(&rett);
	}
}
