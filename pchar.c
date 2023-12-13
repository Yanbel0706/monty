#include "monty.h"


/**
 ** pchar_op - Prints the char at the top of the stack, followed by a new line.
 ** @stack: Double pointer to the head of the stack.
 ** @line_counter: Line number in the file.
 **/
void pchar_op(stack_t **stack, unsigned int line_counter)
{
	int ascii_value = (*stack)->n;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_counter);
		exit(EXIT_FAILURE);
	}

	if (ascii_value < 0 || ascii_value > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_counter);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", ascii_value);
}
