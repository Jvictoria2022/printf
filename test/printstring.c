#include "main.h"

/**
 * _puts - prints a string.followed by a new line.to stdout
 * @str: the string to be printed
 *
 * Return: number of characters printed
 */
int _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
/**
 * printstring - prints out a string
 * @args: list all agruments
 *
 * Returns: 
 */
int print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}

