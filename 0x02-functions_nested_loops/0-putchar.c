#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 *Return: on success 1.
 *on error, -1 is returned, and errno is set approprietelly.
 */
int ft_putchar(char c)
{
	return (write(1, &c, 1));
}
