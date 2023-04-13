#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - Allocates memory and checks if allocation was successful
  * @b: The size of memory to be allocated in bytes
  *
  * Return: A pointer to the allocated memory block,
  * or exit with status 98 if allocation fails
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
