#include <stdio.h>

/**
 * main - Entry point
 * Description: print the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);

	/* Useless line */
	argv[0] = argv[0];

	return (0);
}
