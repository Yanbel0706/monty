#include "monty.h"
/**
 ** instr_runner - a function that execute the  instruction.
 ** @instr: the instruction.
 ** @line_counter: the line when the instruction found for
 ** error handling.
 ** @stack: the stack.
 ** Return: Nothing.
 **/
void instr_runner(stack_t **stack, char *instr, unsigned int line_counter)
{
	char *instruction, *arg;

	instruction = strtok(instr, " \t\n");
	if (instruction)
	{
		arg = strtok(NULL, " \t\n");

		if (strcmp(instruction, "push") == 0)
		{
			if (!arg)
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_counter);
				exit(EXIT_FAILURE);
			}
			push(stack, atoi(arg));
		}
		else if (strcmp(instruction, "pall") == 0)
			pall(stack, line_counter);
		else if (strcmp(instruction, "pop") == 0)
			pop(stack, line_counter);
		else if (strcmp(instruction, "pint") == 0)
			pint(stack, line_counter);
		else if (strcmp(instruction, "swap") == 0)
			swap(stack, line_counter);
		else if (strcmp(instruction, "add") == 0)
			add(stack, line_counter);
		else if (strcmp(instruction, "add") == 0)
			division(stack, line_counter);
		else if (strcmp(instruction, "add") == 0)                                                                       mul(stack, line_counter);
		else if (strcmp(instruction, "add") == 0)
			nop(stack, line_counter);
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_counter, instruction);
			exit(EXIT_FAILURE);
		}
	}
}
