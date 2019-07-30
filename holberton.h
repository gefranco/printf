#ifndef mpf
#define mpf
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char *format, ...);
int mngfmt(const char *c, va_list);
int prt_char(va_list);
int prt_str(va_list);
int prt_int(va_list);
int prt_mod(va_list);
char *itoch(long number);
int cntdtsn(long number);
int prt_bin(va_list);
int prt_unsg(va_list);
int prt_octal(va_list);
int prt_lowhexa(va_list);
int prt_upphexa(va_list);
int prt_strhexa(va_list);
int prt_point(va_list);
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
