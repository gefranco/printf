#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * mngfmt - Function that manage the string format
 * @c:Is the character in decimal.
 * @valist: Is the name of list.
 * Return: 0 if there are no matches.
 */
int mngfmt(int c, va_list valist)
{
	prt_f prto[] = {
		{99, prt_char},
		{115, prt_str},
		{37, prt_mod}
	};

	if (c == 99)
	{
		return (prto[0].f(valist));
	}
	else if (c == 115)
	{
		return (prto[1].f(valist));
	}
	else if (c == 37)
	{
		return (prto[2].f(valist));
	}
	else
	{
		return (0);
	}
}
