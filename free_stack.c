#include "monty.h"
/**
 * free_stack - frees the stack on exit
 * @status: exit status
 * @arg: a pointer to the stack
 *
 */
void free_stack(int status, void *arg)
{
	stack_t **stack;
	stack_t *new;

	(void)status;

	stack = (stack_t **)arg;
	while (*stack)
	{

		new = (*stack)->next;
		free(*stack);
		*stack = new;
	}

}
