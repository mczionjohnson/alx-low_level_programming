#include "main.h"

/**
 * print_alphabet_x10 - prints letters 10x
 *
 */

void print_alphabet_x10(void)
{
	int line = 0;
	char ch = 'a';


	while (line < 10)
	{

		for (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		line++;
	}


}
