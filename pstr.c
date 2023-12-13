#include "monty.h"
#include <stdio.h>

/**
 ** pstr_op - Prints the string starting at the top of the stack, followed by a new line.
 ** @stack: Double pointer to the head of the stack.
 ** @line_counter: Line number in the file.
 **/
void pstr_op(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current != NULL && current->n != 0 && (current->n >= 32 && current->n <= 126))
	{
		printf("%c", current->n);
		current = current->next;
	}

	printf("\n");
}

