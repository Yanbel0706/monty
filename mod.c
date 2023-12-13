#include "monty.h"

/**
 ** mod_op - Computes the rest of the division of the second top element
 ** by the top element of the stack.
 ** @stack: Double pointer to the head of the stack.
 ** @line_counter: Line number in the file for handle errors.
 **/
void op_mod(stack_t **stack, unsigned int line_counter)
{
	int first = (*stack)->n;
	int second = (*stack)->next->n;
	stack_t *current_node = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_counter);
		exit(EXIT_FAILURE);
	}

	if (first == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_counter);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n = second % first;
	*stack = (*stack)->next;
	free(current_node);
	(*stack)->prev = NULL;
}
