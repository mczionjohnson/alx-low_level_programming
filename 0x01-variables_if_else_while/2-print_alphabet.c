#include <stdio.h>

/**
 * main -it prints the alphabet in lowercase
 *
 * Return: returns 0 if successful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
