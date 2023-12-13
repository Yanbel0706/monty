#include "monty.h"

/**
 ** rotr_op - Rotates the stack to the bottom.
 ** @stack: Double pointer to the head of the stack.
 ** @line_counter: Line number in the file.
 **/
void rotr_op(stack_t **stack, unsigned int line_counter)
{
	(void)line_counter;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *last = *stack;
		stack_t *second_last = NULL;

		while (last->next != NULL)
		{
			second_last = last;
			last = last->next;
		}

		second_last->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}
