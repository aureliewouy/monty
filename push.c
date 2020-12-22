#include "monty.h"
#include <ctype.h>

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
	printf("Coucou TOI");
/*	char *delim, *op;
	delim = " \n\t";

	op = strtok(buffer, delim);
	while (op != NULL)
	{
		temp[i] = strdup(op);
		op = strtok(NULL, delim);
		i++;
	}
	if (op == NULL OR check_for_digit(arg))
	{
		
		exit(EXIT_FAILURE);
	}*/
}
