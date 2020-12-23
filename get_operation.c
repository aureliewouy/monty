#include "monty.h"
/**
 * get_operation - function to realize
 * @op: double pointer to the operation function
 * @stack: the stack of the double linked list
 * @line_number: script line
 * Return: 0 if success
 */

void get_operation(char *op, stack_t **stack, unsigned int line_number)
{
	size_t i = 0;
	instruction_t inst_op[] = {
	{"push", function_push},
	{"pall", function_pall},
	{"pint", function_pint},
	{"pop", function_pop},
	{"swap", function_swap},
	{"add", function_add},
	{"nop", nop},
	{NULL, NULL}
	};

	while (inst_op[i].opcode)
	{
		if (strcmp(inst_op[i].opcode, op) == 0)
		{
			inst_op[i].f(stack, line_number);
			return;
		}
		i++;
	}
	dprintf(STDOUT_FILENO, "L%u: unknown instruction %s\n", line_number, op);
	exit(EXIT_FAILURE);
}
