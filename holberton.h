#ifndef mpf
#define mpf
int _printf(const char *format, ...);
int mngfmt(int, va_list);
int prt_char(va_list);
void print_int(va_list);
void print_float(va_list);
int prt_str(va_list);
/**
 * struct print1 - struct of printers operators
 * @t: First member
 * @f: Second member
 *
 * Description: struct to manage diferent types of print
 */
typedef struct prt_format
{
	int t;
	int (*f)(va_list);
} prt_f;
#endif
