#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: pointer to a newly allocated space in memory
 * or NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		z = malloc(sizeof(char) * (len1 + n + 1));
	else
		z = malloc(sizeof(char) * (len1 + len2 + 1));

	if (z == NULL)
		return (NULL);

	while (a < len1)
	{
		z[a] = s1[a];
		a++;
	}

	while (n < len2 && a < (len1 + n))
		z[a++] = s2[b++];

	while (n >= len2 && a < (len1 + len2))
		z[a++] = s2[b++];

	z[a] = '\0';

	return (z);
}
