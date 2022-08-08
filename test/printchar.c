#include "main.h"
/**
 * print_char - prints a char
 * @args: lists arguments
 *
 * Returns: always 1
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
