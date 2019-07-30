#include "holberton.h"

/**
 * prt_int - This is a function that prints an integer
 * @valist: Is the name of va_list
 * Return: cc - 1.
 */
int prt_int(va_list valist)
{
	int cc = 0;
	long nu = va_arg(valist, int);
	int i;
	char *digits;
	int cnt = 0;
	char *a;
	char min = '-';

	if (nu < 0)
	{

		a = (char *)&min;

		if (a)
		{
			write(STDOUT_FILENO, a, 1);
			cc++;
		}
		nu = -nu;

	}

	digits = itoch(nu);
	cnt = cntdtsn(nu);
	for (i = 1; i <= cnt; i++)
	{
		a = (char *)&digits[i];
		if (a && a != NULL && a != '\0')
		{
			write(STDOUT_FILENO, a, 1);
			cc++;
		}
	}
	free(digits);
	return (cc);
}
/**
 * cntdtsn - This is a function that count the digits of a number.
 * @num: Is the number that join in the function.
 * Return: count.
 */
int cntdtsn(long num)
{
	int count = 1;

	num = num / 10;
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
/**
 * itoch - This is a function for change a integer to a char.
 * @numb: This is the number that changed to a char.
 * Return: a char.
 */
char *itoch(long numb)
{
	char nn;
	long number2 = numb;
	int count = 1;
	int i = 0;
	char *digits;
	int j = 0;

	count = cntdtsn(number2);
	i = count;
	number2 = numb;
	digits = malloc(count  * sizeof(char *));
	while ((number2 = number2 / 10) > 0)
	{
		numb = numb % 10;
		nn = numb  + '0';
		numb = number2 % 10;
		digits[i] = nn;
		i--;
		j++;
	}
	numb = numb % 10;
	nn = numb + '0';
	digits[i] = nn;

	for (j = 0; digits[j]; j++)
	{
		printf("%c******", digits[j]);
	}

	return (digits);
}
