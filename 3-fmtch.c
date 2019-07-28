#include <stdarg.h>
#include <unistd.h>
int prt_char(va_list valist)
{
        int cc = 0;
        int *c = va_arg(valist,int);    
        cc += write(STDOUT_FILENO, &c, 1);
        return (cc);    
}
