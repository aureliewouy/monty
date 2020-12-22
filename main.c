#include "monty.h"
/**
 * main - interpreter de monty
 * @argc: the arguments number
 * @argv: double pointer to the string of arguments
 * Return: if success 0, else 1
 */
int main(int argc, char **argv)
{
	FILE *file;
	int getl, i = 0, j;
	char *buffer = NULL;
	size_t bufsize = 0;
	char *delim, *op;
	char **temp;
	delim = " \n\t";
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{	/*Error: ;*/
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		/*Error: Can't open file <file>*/
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &bufsize, file) != -1)
	{
		line_number++;
/*	if (getline == -1)
		exit(EXIT_FAILURE);*/
		temp = malloc(bufsize * sizeof(char *));
		op = strtok(buffer, delim);
		while (op != NULL)
		{
			temp[i] = strdup(op);
			op = strtok(NULL, delim);
			i++;
		}
		temp[i] = NULL;
		j = 0;
		while (temp[j])
		{
			get_operation(temp[j], &stack, line_number);
			j++;
		}
	}
	return (0);
}
