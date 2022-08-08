#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * @putchar: prints characters
 * @printf:prints out to stdout
 * @print_char: prints array of char
 * @print_string: print array of strings
 */

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);





#endif
