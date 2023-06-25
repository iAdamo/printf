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

#endif
