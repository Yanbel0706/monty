#include "monty.h"

/**
 ** division - a function that divides the second
 ** top element by the top element of the stack.
 ** @stack: Double pointer to the head of the stack.
 ** @line_counter: Line number in the file.
 **/
void division(stack_t **stack, unsigned int line_counter)
{
	int dvs = (*stack)->n;
	int dvd = (*stack)->next->n;
	stack_t *current_node = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_counter);
		exit(EXIT_FAILURE);
	}

	if (dvs == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_counter);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = dvd / dvs;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(current_node);
}
