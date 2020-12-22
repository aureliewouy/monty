#include "monty.h"
/**
 * get_operation - function to realize
 * @op - double pointer to the operation function
 * Return: 0 if success
 */
/*int (*get_operation(char *op))(stack_t **stack, unsigned int line_number)
  {*/

void get_operation(char *op, stack_t **stack, unsigned int line_number)
{
	size_t i;
	instruction_t inst_op[] = {
	{"push", function_push},
	{"pall", function_pall},
/*	{"pint", function_for_pint},
	{"pop", function_for_pop},
	{"swap", function_swap},
	{"add", function_add}*/
	{NULL, NULL}
	};

	while (inst_op[i].opcode)
	{
		if (strcmp(inst_op[i].opcode, op) == 0)
		{
			return (inst_op[i].f(stack, line_number));
		}
		i++;
	}
}
