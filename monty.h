#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 100



/**
 ** struct stack_s - Doubly linked list representation of a stack.
 ** @n: Integer data of the stack node.
 ** @prev: Pointer to the previous node in the stack.
 ** @next: Pointer to the next node in the stack.
 **/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

void push(stack_t **stack, int element);
void pop(stack_t **stack, unsigned int line_counter);
void pall(stack_t **stack, unsigned int line_counter);
void swap(stack_t **stack, unsigned int line_counter);
void pint(stack_t **stack, unsigned int line_counter);
void add(stack_t **stack, unsigned int line_counter);
void division(stack_t **stack, unsigned int line_counter);
void mul(stack_t **stack, unsigned int line_counter);
void sub(stack_t **stack, unsigned int line_counter);
void op_mod(stack_t **stack, unsigned int line_counter);
void pstr_op(stack_t **stack, unsigned int line_counter);
void rotl_op(stack_t **stack, unsigned int line_counter);
void nop(stack_t **stack, unsigned int line_counter);
void file_parser(const char *filename, stack_t **stack);
void instr_runner(stack_t **stack, char *instr, unsigned int line_counter);

#endif /* MONTY_H */
