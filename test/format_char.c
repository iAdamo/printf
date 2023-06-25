#include "main.h"
/**
 * char_ID - handles character indetification
 * @c: character list
 * Return: return 1 on success
*/

int char_ID(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);

	return (1);
}
