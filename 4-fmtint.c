#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
char *itoch(int number);
int cntdtsn (int number);
int prt_int(va_list valist)
{	

	int cc = 0;
        int number = va_arg(valist,int);
	int i;
	char *digits;
	int cnt = cntdtsn(number);
	digits = itoch(number);


	for(i = 0; i <= cnt; i++)
        {
		cc += write(STDOUT_FILENO, digits++, 1);
        }
	return (cc - 1);    
}
int cntdtsn (int number)
{
	int count = 1;
	number = number / 10;
        while (number > 0)
        {
                number = number / 10;
		count++;
        }
        return (count);
}
char *itoch(int number)
{
	char nn;
	int number2 = number;
	int count = 1;
	int i = 0;	
	char *digits;
	int j = 0;	
	
	count = cntdtsn(number2);
	i = count;
	number2 = number;	
	digits = malloc(count * sizeof(char));
	while((number2 = number2 / 10) > 0)
	{
		number = number % 10;
		nn = number  + '0';		
		number = number2 % 10;	
		digits[i] = nn;
		i--;
		j++;	
	}
	number = number % 10;
	nn = number + '0';
	digits[i] = nn;
	return (digits);
}
