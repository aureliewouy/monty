#include "monty.h"
/**
 * function_add - add the top two elements of the stack
 * @stack: the stack
 * @line_number: the line number
 *
 * Return: void.
 */

void function_add(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;
	int add;
	(void)line_number;

	if (*stack == NULL && (*stack)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	first = *stack;
	second = (*stack)->next;
	add = first->n + second->n;
	(*stack) = second;
	(*stack)->n = add;
	(*stack)->prev = NULL;
	free(first);
}
