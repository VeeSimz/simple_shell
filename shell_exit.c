#include "shell.h"

/**
 * myExit - exits the program
 * @cmd: exit command
 *
 * Return: exit status
 */

int myExit(char **cmd)
{
	int exitp;

	if (strcmp(cmd[0], "exit") == 0)
	{
		if (cmd[1] != NULL)
		{
			exitp = atoi(cmd[1]);
			if (exitp >= 0)
			{
				exit(exitp);
			}
			else
			{
				perror(cmd[1]);
				exit(2);
			}
		}
		else
		{
			exit(0);
		}
	}
	return (0);
}
