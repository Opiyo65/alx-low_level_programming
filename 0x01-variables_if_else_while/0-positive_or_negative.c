#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print interger
 * Description: program that print a positive or negative or zero
 * Return: always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d\n",n)
	scanf("%d", &n);
	if (n > 0)
	{
		printf("Number is positive");
	}
	if (n < 0)
	{
		printf("Number is negative");
	}
	if (n == 0)
	{
		printf("Number is zero");
	}
	return (0);
}
