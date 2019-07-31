#include "holberton.h"
/**
 * mngfmt - Function that manage the string format
 * @c:Is the character in decimal.
 * @valist: Is the name of list.
 * Return: 0 if there are no matches.
 */
int mngfmt(const char *c, va_list valist)
{
	int i = 0;
	prt_f prto[] = {
		{"c", prt_char},
		{"s", prt_str},
		{"d", prt_int},
		{"%", prt_mod},
		{"i", prt_int},
		{"b", prt_bin},
		{"u", prt_unsg},
		{"o", prt_octal},
		{"x", prt_lowhexa},
		{"X", prt_upphexa},
		{"S", prt_strhexa},
		{"p", prt_point},
		{NULL, NULL}
	};

	while (prto[i].t)
	{
		if (prto[i].t[0] == c[0])
			return (prto[i].f(valist));
		i++;
	}
	

	return (-1);


}
