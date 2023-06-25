#include "main.h"
/**
 * getBase - power in 10 base
 * @n: an exponent
 * Return: returns 10 to power exponent
 */
int getBase(int n)
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
 * decimal_ID - A function that prints a decimal base 10
 * @i: base 10 integer to print
 * Return: number of printed digits
 */
int decimal_ID(va_list i)
{
	int a[10];
	int j = 1, power, num, sum = 0, count = 0;

	power = getBase(8);

	num = va_arg(i, int);
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
		count++;
	}
	a[0] = num / power;

	while (j < 10)
	{
		power /= 10;
		a[j] = (num / power) % 10;
		j++;
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
