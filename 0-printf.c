#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * print_all - check the code for Holberton School students.
 * @format: a list of types of arguments
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int i = 0;
	int cc = 0;
	va_start(valist, format);
	while (format && format[i])
	{
		if(format[i] == 37)
		{
			i++;
			cc += mngfmt(format[i], valist);
		}
		else
		{
			cc += write(STDOUT_FILENO, &format[i], 1);
		}
		i++;
	}
	va_end(valist);
	return (cc);
}
