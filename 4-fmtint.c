#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * prt_int - This is a function that prints an integer
 * @valist: Is the name of va_list
 * Return: cc - 1.
 */
int prt_int(va_list valist)
{
	int cc = 0;
	int number = va_arg(valist, int);
	char *digits;
	int cnt;

	if (number < 0)
	{
		number *= -1;
		cc += write(STDOUT_FILENO, "-", 1);
	}

	digits = itoch(number);
	cnt = cntdtsn(number);
/*	for (i = 0; i <= cnt; i++)*/
	{
		cc += write(STDOUT_FILENO, digits, cnt + 1);
	}
	free(digits);
	return (cc - 1);
}
/**
 * cntdtsn - This is a function that count the digits of a number.
 * @number: Is the number that join in the function.
 * Return: count.
 */
int cntdtsn(int number)
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
/**
 * itoch - This is a function for change a integer to a char.
 * @number: This is the number that changed to a char.
 * Return: a char.
 */
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
	digits = malloc(count  * sizeof(char *));
	while ((number2 = number2 / 10) > 0)
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
