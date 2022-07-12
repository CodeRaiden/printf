#ifndef MAINH
#define MAINH

#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif /* MAINH */


