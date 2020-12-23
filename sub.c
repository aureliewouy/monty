#include "monty.h"
/**
 * function_sub - substracts the top two elements of the stack
 * @stack: the stack
 * @line_number: line number
 *
 * Return: void.
 */

void function_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		dprintf(STDERR_FILENO, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{

		first = *stack;
		second = (*stack)->next;
		second->n -= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
