#ifndef ADAM_DAMI
#define ADAM_DAMI

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct type - stuct type
 * @a: format
 * @func: handler function
 */
struct type
{
	char *a;
	int (*func)(va_list);
};
/**
 * convert - typedef convert for struct type
 */
typedef struct type convert;

int _printf(const char *format, ...);
int _putchar(char c);
int char_ID(va_list c);
int string_ID(va_list s);
int integer_ID(va_list i);
int decimal_ID(va_list d);
int binary_ID(va_list b);

#endif
