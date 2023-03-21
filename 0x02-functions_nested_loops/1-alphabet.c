#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
