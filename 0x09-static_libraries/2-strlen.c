#include "main.h"
/**
 * _strlen - returns the
 * length of a string.
 * @s: pointer to a string,
 * Return: nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
