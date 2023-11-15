#include "shell.h"

/**
 * _strtok - splits and tokenises string input
 * @input: string input
 * @delimiter: character used to delimit the string input
 * Return: array of tokenised strings
 */
char *_strtok(char *input, char *delimiter)
{
	return (strtok(input, delimiter));
}
