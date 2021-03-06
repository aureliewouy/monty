#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void get_operation(char *op, stack_t **stack, unsigned int line_number);
stack_t *add_dnodeint(stack_t **head, const int n);
int checking_digit(char *arg);
void function_push(stack_t **stack, unsigned int line_number);
void function_pall(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void free_buffer(int status, void *arg);
void free_stack(int status, void *arg);
void file_close(int status, void *arg);
void function_pint(stack_t **stack, unsigned int line_number);
void function_pop(stack_t **stack, unsigned int line_number);
void function_swap(stack_t **stack, unsigned int line_number);
void function_add(stack_t **stack, unsigned int line_number);
void function_sub(stack_t **stack, unsigned int line_number);
#endif
