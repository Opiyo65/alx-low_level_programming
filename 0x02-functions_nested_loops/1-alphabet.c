#include <stdio.h>
/**
* print_alphabet - lowercase
*
* Return: always 0 (success)
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
