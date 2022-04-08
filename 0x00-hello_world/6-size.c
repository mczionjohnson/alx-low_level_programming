#include <stdio.h>

/**
 * main - calls the printf func
 * Return: zero for success, non zero for otherwise
 */
int main(void)
{
	printf("size of char: %d bytes(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
