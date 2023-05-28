#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int print_c(va_list l);
int print_s(va_list l);
int print_i(va_list l);
int print_bin(va_list l);
int print_oct(va_list l);
int print_x(va_list l);
int print_X(va_list l);
int print_u(va_list l);
int print_rev(va_list l);
int print_rot13(va_list l);
int print_S(va_list l);
int print_p(va_list l);
int get_func(va_list l, char k, char c);
#endif /* MAIN_H */
