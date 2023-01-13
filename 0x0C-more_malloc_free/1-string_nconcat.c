#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate s1 with n bytes from s2
 * @s1: the first string the add to allocated malloc space allocated
 * @s2: the second string from which n bytes will be taken and added to s2
 * @n: the number of bytes to extract from s2
 *
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;
	char *nul = "";

	if (s1 == NULL)
		return (nul);
	if (s2 == NULL)
		return (nul);
	i = 0;
	while (s1[i] != '\0')
	{
		i = i + 1;
	}
	while (s2[j] != '\0')
	{
		j = j + 1;
	}
	j = j + 1;
	if (n >= j)
	{
		n = j;
	}
	s = malloc(sizeof(*s1) * i + sizeof(*s2) * n);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s2[i];
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
