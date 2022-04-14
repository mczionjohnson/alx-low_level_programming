#include "main.h"
/**
 * more_numbers - prints num 1 - 14 on ten lines.
 *
 * Return: nothing.
 *
 */
void more_numbers(void)
{
	int n, j;

	n = 0;
	while (n < 10; n++)
	{
		j = 0;
		while (j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	_putchar('\n');
	}
}
