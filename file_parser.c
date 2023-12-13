#include "monty.h"

/**
 ** file_parser - A function that parses a file.
 ** @filename: The name of the file to be parsed.
 ** @stack: A double pointer to the head of the stack.
 ** Return: Nothing.
 **/
void file_parser(const char *filename, stack_t **stack)
{
	char line[MAX_LINE_LENGTH];
	FILE *file = fopen(filename, "r");
	unsigned int line_counter = 0;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file <%s>\n", filename);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), file))
	{
		line_counter++;
		instr_runner(stack, line, line_counter);
	}

	fclose(file);
}
