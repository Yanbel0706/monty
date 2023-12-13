#include "monty.h"

/**
 ** main - The monty program.
 ** @argc: a pointer to the number of arguments.
 ** @argv: a pointer to an array of arguments.
 ** Return: 0 for success .
 **/
int main(int argc, const char *argv[])
{
	const char *filename;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	filename = argv[1];
	file_parser(filename, &stack);

	return (0);
}
