#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat-function that concatenates two strings
 * @s1: first_input
 * @s2: second_input
 * Return: result of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci;

	if (s1 == NULL)
		return ('');
	if (s2 == NULL)
		return ('');
		i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NUlL);

	i = ci = 0;

	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
