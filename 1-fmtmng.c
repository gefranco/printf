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
		{NULL, NULL}
	};

	while (prto[i].t)
	{
		/*printf("%s**************", c);*/
		if (prto[i].t[0] == c[0])
			return (prto[i].f(valist));
		
		i++;
	}
	
	/*if (prto[] == "c")
	{
		return (prto[0].f(valist));
	}
	else if (c == 115)
	{
		return (prto[1].f(valist));
	}
	else if (c == 'd')
		return (prto[2].f(valist));
	else if (c == 37)
	{
		return (prto[3].f(valist));
	}
	else if (c == 'i')
	{
		return (prto[4].f(valist));
	}
	else
	{
		return (0);
	}*/
		return (0);


}
