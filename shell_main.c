#include "shell.h"

//id exec(char *token, char **input, char **env);

/*
 * main - start of the program
 * @ac: array length
 * @av: arguments in the array
 * Return: 0 success
 *
 */

int main(int ac, char *av[], char *env[])
{
	char *cmd[20], *token;
	int status = 0;
	char *buf = NULL;
	size_t size = 0;

	while (getline(&buf, &size, stdin) != EOF)
	{
		if (isatty(STDIN_FILENO))
			write(1,"$ ", 2);
		fflush(stdout);
		token = strtok(buf, " \t\n");
		int i = 0;

		while (/*token != NULL &&*/ i < 19)
		{
			cmd[i] = token;
			i++;
			token = strtok(NULL, " \t\n");
		}
		cmd[i] = NULL;
		exec(cmd[0], cmd, env);
	}
	free(buf);
	return (status);
}

