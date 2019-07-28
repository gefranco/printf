#include <stdarg.h>
#include <unistd.h>
int prt_str(va_list valist)
{
        int cc = 0;
        char *s = va_arg(valist, char*);
        int i = 0;
        while (s[i])
        {       
                cc += write(STDOUT_FILENO, &s[i], 1);
                i++;
        }       
        return (cc);
}
