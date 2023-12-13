#include  "monty.h"

/**
 ** sub - a function that substract the first
 **  element from the second element of the stack.
 ** @stack: Double pointer to the head of the stack.
 ** @line_counter: Line number in the file.
 **/
void sub(stack_t **stack, unsigned int line_counter)
{
	int first = (*stack)->n;
	int second = (*stack)->next->n;
	stack_t *current_node = *stack;
				
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_counter);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = second - first;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(current_node);
}
