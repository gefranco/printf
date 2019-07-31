#include "holberton.h"
/**
 * _printf - This is a program like the printf make for Holberton.
 * @format: This is the String that join in the program.
 * Return: Returns a string with a treated format.
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int i = 0;
	int cc = 0;
	char *a;

	va_start(valist, format);
	if(!format)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == 37)
		{
			i++;
			a = (char *)&format[i];
			if (a == NULL)
				return (-1);

			cc += mngfmt(a, valist);
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
