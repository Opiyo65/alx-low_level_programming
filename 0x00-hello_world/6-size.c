#include <stdio.h>
/**
 * main -  print size of various types of variables
 *
 * variables: char, int, long int, long long int and float
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
