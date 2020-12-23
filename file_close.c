#include "monty.h"

/**
 * file_close - close file stream
 * @status: status passed to exit
 * @arg: pointer to file stream
 *
 * Return: void
 */
void file_close(int status, void *arg)
{
	FILE *file;

	(void)status;

	file = (FILE *) arg;
	fclose(file);
}
