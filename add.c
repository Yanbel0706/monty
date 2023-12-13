#include "monty.h"

/**
 ** add - a function that adds the top two elements of the stack.
 ** @stack: a double pointer to the head of the stack.
 ** @line_counter: the line number in the file.
 ** Return: Nothing.
 **/
void add(stack_t **stack, unsigned int line_counter)
{
	stack_t *top_element = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_counter);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	(*stack)->n += top_element->n;
	free(top_element);
	(*stack)->prev = NULL;
}
