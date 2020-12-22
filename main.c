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
	int getl, i = 0, j = 0;
	char *buffer = NULL;
	char *buff = NULL;
	size_t bufsize = 0;
	char *delim, *op;
	char **temp;
	delim = " \n";
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{       /*Error: ;*/
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
		temp = malloc(sizeof(bufsize));
/*      if (getline == -1)
                exit(EXIT_FAILURE);*/

		op = strtok(buffer, delim);
		while (op != NULL)
		{
			temp[i] = op;
			printf("op : %s\n", temp[i]);

/*                      get_operation(temp[i], &stack, line_number);
 */			op = strtok(NULL, delim);
			i++;
		}
		temp[i] = NULL;
		if (temp[j] != NULL)
		{
			get_operation(temp[j], &stack, line_number);
			j += 2;
		}

	}

	fclose(file);
	return (0);
}
