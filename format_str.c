#include "main.h"
/**
 * string_ID - handles strings indentification
 * @s: string variable
 * Return: return 1 if success
*/
int string_ID(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i++]);
	}

	return (i);
}
