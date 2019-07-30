#include <stdarg.h>
#include <unistd.h>
/**
 * prt_str - This function process the string when is "s" type.
 * @valist: Is the name of the va_list.
 * Return: cc.
 */
int prt_str(va_list valist)
{
	int cc = 0;
	char *s = va_arg(valist, char*);
	int i = 0;
	char *exeption = "(null)";

	if (s == NULL)
	{
		write(STDOUT_FILENO, exeption, 6);
		return (6);
	}
	while (s[i])
	{
		cc += write(STDOUT_FILENO, &s[i], 1);
		i++;
	}
	return (cc);
}
