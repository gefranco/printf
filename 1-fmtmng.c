#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
int mngfmt(int c, va_list valist)
{
	prt_f prto[] = {
		{99, prt_char},
		{115, prt_str},
		{100, prt_int}
	};
	
	if (c == 99)
	{
		return (prto[0].f(valist));
	}
	else if (c == 115)
	{
		return (prto[1].f(valist));
	}
	else if (c == 100)
		return (prto[2].f(valist));
	else 
	{
		return(0);
	}
}
