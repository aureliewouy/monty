#include "monty.h"

/**
 * function_pop - removes the top element of the stack
 * @stack: the stack
 * @line_number: the line number
 *
 * Return: void
 */

void function_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *first;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	first = *stack;
	*stack = (*stack)->next;
	if (first->next)
		first->next->prev = NULL;
	free(first);

}
