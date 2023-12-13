#include "monty.h"

/**
 ** push - a function that pushes an element to the stack.
 ** @stack: the stack
 ** @element: the element we need to push.
 ** Return: Nothing.
 **/
void push(stack_t **stack, int element)
{
	stack_t *new_n = malloc(sizeof(stack_t));

	if (!new_n)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_n->n = element;
	new_n->prev = NULL;
	new_n->next = *stack;
	if (*stack)
	{
		(*stack)->prev = new_n;
	}
	*stack = new_n;
}
