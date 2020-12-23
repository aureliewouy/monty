#include "monty.h"

/**
 * free_buffer - free pointer to the line rec from getline
 * @arg: pointer to the line
 * @status: exit status
 *
 * Return: void
 */
void free_buffer(int status, void *arg)
{
	char **buffer = arg;

	(void)status;
	if (*buffer != NULL)
		free(*buffer);
}
