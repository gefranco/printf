#include "holberton.h"
/**
 * prt_mod - This is a function that process the case %% for print %.
 * @valist: Is the name of the va_list.
 * Return: cc.
 */
int prt_mod(va_list valist)
{
	int cc;
	char c = '%';
	(void) valist;

	cc = 0;
	cc += write(STDOUT_FILENO, &c, 1);
	return (cc);
}
