#include <stdio.h>
#include <time.h>
/**
 * main - Determining if a number is positive or negative or zero
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positve\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is negative\n");
	}
	return (0)
}
