#include "monty.h"

/**
 ** pop - a function  removing the top element of the stack.
 ** @stack: a pointer to the top element of the stack.
 ** @line_counter: the number of the line for errors handle.
 ** Return: Nothing.
 **/
void pop(stack_t **stack, unsigned int line_counter)
{
	stack_t *current_node;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_counter);
		exit(EXIT_FAILURE);
	}
	current_node = *stack;
	*stack = (*stack)->next;
	free(current_node);
}
