#include "main.h"

/**
 * print_alphabet_x10 - prints letters 10x
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		for (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}


}
