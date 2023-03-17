#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	int c1 = 0;
	int a1;
	int b1;

	int c2;
	int a2;
	int b2;

	while (c1 <= 98)
	{
		a1 = (c1 / 10 + '0');
		b1 = (c1 % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			a2 = (c2 / 10 + '0');
			b2 = (c2 % 10 + '0');

			if (c1 < c2)
			{
				putchar(a1);
				putchar(b1);
				putchar(' ');
				putchar(a2);
				putchar(b2);

				if (c1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c1++;
	}
	putchar('\n');
	return (0);
}
