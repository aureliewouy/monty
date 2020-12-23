#include "monty.h"

/**
 * function_pint - prints the value at the top of the stack
 * @stack: the stack
 * @line_number: the number of the line
 *
 * Return: void
 */

void function_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);

}
