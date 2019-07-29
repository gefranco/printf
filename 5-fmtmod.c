#include <stdarg.h>
#include <unistd.h>
/**
 * prt_mod - This is a function that process the case %% for print %.
 * @valist: Is the name of the va_list.
 * Return: cc.
 */
int prt_mod(va_list valist)
{
	(void) valist;

	int cc;
	char c = '%';

	cc = 0;

	cc += write(STDOUT_FILENO, &c, 1);
	return (cc);
}
