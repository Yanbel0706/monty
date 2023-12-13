#include "monty.h"

/**
 ** swap - a function that  swaps the top two elements of the stack.
 ** @stack: the stack.
 ** @line_counter: the number of the line we found error
 ** Retrun: Nothing.
 **/
void swap(stack_t **stack, unsigned int line_counter)
{
	int top_element = (*stack)->n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_counter);
		exit(EXIT_FAILURE);
	}
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = top_element;
}
