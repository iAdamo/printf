#include "main.h"
/**
 * binary_ID - handles binary identification
 * @b: unsigned integer
 * Return: return a count
*/
int binary_ID(va_list b)
{
	int i, num;
	int count = 0;
	unsigned int rmd[32];

	num = va_arg(b, int);

	for (i = 0; i < 32; i++)
	{
		rmd[i] = num % 2;
		num = num / 2;
		count++;
		if (num <= 0)
		{
			break;
		}
	}
	while (i >= 0)
	{
		_putchar(rmd[i] + '0');
		i--;
	}

	return (count);
}
