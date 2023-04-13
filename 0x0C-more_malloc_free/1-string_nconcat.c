#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings, taking at most n bytes from s2
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 * @n: the maximum number of bytes of s2 to be concatenated
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0, len2 = 0, i;

	/* Calculate the length of the two input strings */
	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}

	if (n >= len2)
	{
		n = len2;
	}

	/* Allocate memory for the concatenated string */
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	/* Copy the characters into the result string */
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[len1 + i] = s2[i];
	}
	s[len1 + n] = '\0';

	return (s);
}
