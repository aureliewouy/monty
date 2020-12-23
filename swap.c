#include "monty.h"

/**
 * function_swap - swaps the top two elements of the stack
 * @stack: the stack
 * @line_number: the line number
 *
 * Return: void
 */

void function_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if (*stack == NULL && (*stack)->next == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	if (*stack)
	{
		first = *stack;
		second = (*stack)->next;
		*stack = second;
		first->next = second->next;
		if (second->next != NULL)
			second->next->prev = first;
		second->prev = NULL;
		second->next = first;
		first->prev = second;
	}

}
