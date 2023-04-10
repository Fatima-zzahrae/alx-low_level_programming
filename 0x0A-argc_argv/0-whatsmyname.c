#include <stdio.h>

/**
 * main - print the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 1)
	{
		printf("Usage: mynameis\n");
		return (1);
	}

	printf("%s\n", argv[0]);
	return (0);
}
