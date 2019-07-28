#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
int mngfmt(int c, va_list valist)
{
	prt_f prto[] = {
		{99, prt_char},
		{115, prt_str}
	};
	
	if (c == 99)
	{
		return (prto[0].f(valist));
	}
	else if (c == 115)
	{
		return (prto[1].f(valist));
	}
	else 
	{
		return(0);
	}
}
