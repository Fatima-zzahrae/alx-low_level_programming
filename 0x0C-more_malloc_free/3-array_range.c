#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 *
 * @min: the minimum integer value of the array
 * @max: the maximum integer value of the array
 *
 * Return: pointer to the newly created array of integers, or NULL if
 *         memory allocation fails or min is greater than max
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}

	return (arr);
}
