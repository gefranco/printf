#ifndef mpf
#define mpf
#include <stdarg.h>
int _printf(const char *format, ...);
int mngfmt(const char *c, va_list);
int prt_char(va_list);
int prt_str(va_list);
int prt_int(va_list);
int prt_mod(va_list);
char *itoch(int number);
int cntdtsn(int number);
/**
 * struct prt_format - struct of printers operators
 * @t: Is the character.
 * @f: Is the function that is called.
 *
 * Description: struct to manage diferent types of print
 */
typedef struct prt_format
{
	char *t;
	int (*f)(va_list);
} prt_f;
#endif
