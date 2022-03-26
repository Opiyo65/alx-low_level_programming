#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: always 0 (success)
 **/
void print_alphabet_x10(void)
{
	int count;
	int y;
	count = 0;
	while (count < 10)
	{
		for (y = 97; y < 122; y++)
			putchar(y);
		putchar(\n);
	}
}
