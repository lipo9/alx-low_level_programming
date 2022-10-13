#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include<stdarg.h>

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct printer - a type that defines a printer
 * @c: char for data type
 * @fp_print: a function pointer that points to
 * a printing function that corresponds to @c
 */
typedef struct printer
{
	char *c;
	void (*fp_print)(va_list arg);
} print_t;

void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif
