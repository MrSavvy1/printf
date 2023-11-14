#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/*-------structs---------*/
typedef struct fmt
{
	char c;
	int (*action_func)(va_list);
} fmt_t;

/*-----------function_prototypes-----------*/
int _printf(const char *, ...);
int (*fetch_func(char))(va_list);
int unknown(const char *);
int _putchar(char);
int _print_digit(long, int);

/*---------action_functions-----------*/
int print_char(va_list);
int print_str(va_list);
int print_pcnt(va_list);
int print_digit(va_list);
int print_hex(va_list);


/*-------------action_func_2----------*/
int int_binary(va_list);



#endif /*MAIN_H*/
