#include "monty.h"

/**
 ** rotl_op - Rotates the stack to the top.
 ** @stack: Double pointer to the head of the stack.
 ** @line_counter: Line number in the file.
 **/
void rotl_op(stack_t **stack, unsigned int line_counter)
{
	(void)line_counter;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *first = *stack;
		stack_t *second = (*stack)->next;

		while (first->next != NULL)
		{
			first = first->next;
		}

		first->next = *stack;
		*stack = second;
		first->next->next = NULL;
	}
}
