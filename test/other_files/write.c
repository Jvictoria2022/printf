#include "main.h"
/* _printf -printf function
 * @format: const char pointer
 *
 * Return: count
 */
int _printf(const char *format,...)
{
	int i = 0;
	int count = 0;
	va_list args;
	
	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += print_char(args);
					i += 2;
					break;
				case '%':
					_putchar('%');
					count++;
					i += 2;
					break;
				case 's':
					count += print_string(args);
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;	
			}
		}
		if (format[i])
		{
		_putchar(format[i]);
		count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
