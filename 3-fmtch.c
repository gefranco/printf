#include "holberton.h"
/**
 * prt_char - This is a function that process the string that is "c" type.
 * @valist: Is the name of the va_list.
 * Return: cc.
 */
int prt_char(va_list valist)
{
	int cc = 0;
	int *c = va_arg(valist, int);

	cc += write(STDOUT_FILENO, &c, 1);
	return (cc);
}
