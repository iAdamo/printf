#include "main.h"
/**
 * base10 - power in 10 base
 * @n: an exponent
 * Return: returns 10 to power exponent
 */
int base10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}
/**
 * interger_ID - A function that prints a base 10 integer
 * @i: integer to print
 * Return: number of printed digits
 */
int interger_ID(va_list i)
{
	int a[10];
	int j = 1, num, sum = 0, count = 0;
	int power;

	power = base10(8);

	num = va_arg(i, int);
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
		count++;
	}
	a[0] = num / power;

	for (; j < 10; j++)
	{
		power /= 10;
		a[j] = (num / power) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}
