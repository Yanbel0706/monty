#include "monty.h"

/**
 ** pall - a function to print all elements on the stack
 ** @stack: a stack.
 ** @line_counter: the line number(unused)
 ** Return: Nothing.
 **/
void pall(stack_t **stack, unsigned int line_counter)
{
	stack_t *current_node = *stack;
	(void) line_counter;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
}
