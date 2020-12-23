#include "monty.h"

/**
 * checking_digit - checks that a string contains only digits
 * @arg: string to checkюяф
 *
 * Return: 0 if digit, else 1
 */
int checking_digit(char *arg)
{
	int i;

	for (i = 0; arg[i]; i++)
	{
		if (arg[i] == '-' && i == 0 && strlen(arg) > 1)
			continue;
		if (isdigit(arg[i]) == 0)
			return (1);
	}
	return (0);
}
/**
 * function_push - push the integer into the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void function_push(stack_t **stack, unsigned int line_number)
{
	char *op;
	int n;

	op = strtok(NULL, "\n\t\r ");
	if (op == NULL || checking_digit(op))
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(op);
	if (!add_dnodeint(stack, n))
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}
