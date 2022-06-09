#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: prints  if a number is positive or negative.
 * Return: 0
 */
int main(void)
{
	int i;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
