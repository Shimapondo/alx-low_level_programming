#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci number
 *
 * Description: prints the first 98 Fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)

{
	unsigned long int i, j, k;
	unsigned long int max = 10000000000;
       	i = 1;
       	j = 2;
	
	printf("%lu,%lu", i, j);

	for (k = 3; k <= 98; k++)
	{
		printf(", %lu", i +j);
		j = i + j;
		i = j - i;
		if (j > max || i > max)
			break;
	}
	printf("ln");

	return (0);
}
