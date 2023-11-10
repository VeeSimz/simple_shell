#include "shell.h"

/*
 * main - start of the program
 * @ac: array length
 * @av: arguments in the array
 * Return: 0 success
 *
 */

int main(int ac, char *av[])
{
	char *input = NULL;
	size_t size = 0;
	(void)ac;
	(void)av;

	printf("$ ");
	while (getline(&input, &size, stdin) != EOF)
	{
		write(1, "$ ", 2);
	}
	free(input);
	exit(0);

}
