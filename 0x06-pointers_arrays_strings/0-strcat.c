#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int k;

	while (*(dest + j) != '\0')
		j++;
	while (*(src + k) != '\0')
	{
		*(dest + j) = *(src + k);
		j++;
		k++;
	}
	return (dest);
}
