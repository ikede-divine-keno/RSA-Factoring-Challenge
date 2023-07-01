#include "factors.h"

/**
 * main - main function
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t count;
	ssize_t get;
	char *buff = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while((get = getline(&buff, &count, fptr)) != -1)
	{
		_factorize(buff);
	}
	return (0);
}
