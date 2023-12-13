#include "monty.h"

/**
 ** stack_op - Sets the format of the data to a stack (LIFO).
 ** @stack: Double pointer to the head of the stack.
 ** @line_counter: Line number in the file.
 **/
void stack_op(stack_t **stack, unsigned int line_counter)
{
	(void)line_counter;
	(void)stack; 
}

/**
 ** queue_op - Sets the format of the data to a queue (FIFO).
 ** @stack: Double pointer to the head of the stack.
 ** @line_counter: Line number in the file.
 **/
void queue_op(stack_t **stack, unsigned int line_counter)
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
		last->prev = NULL;
		(*stack)->prev = last;
		*stack = last;
	}
}
