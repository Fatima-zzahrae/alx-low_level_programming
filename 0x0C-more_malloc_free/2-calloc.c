#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc and sets memory to zero
 * @nmemb: The number of elements in the array
 * @size: The size of each element in the array
 *
 * Return: If successful, a pointer to the allocated memory. Otherwise, NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}

	/* Set each byte to zero */
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}

	return ((void *)a);
}
