#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to the array
 *  @n: the number of element in the array.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	while (n % 2 = 0)
	{
		for (i = 0; i <= n / 2; i++)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			j--;
		}
	}
	while (n % 2 != 0)
	{
		for (i = 0; i < n / 2; i++)
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			j--;
		}
	}
}
