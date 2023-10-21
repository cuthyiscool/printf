#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

int _putchar(char c);

int printf_int(int arg);

int printf_char(char arg);

int printf_string(char *arg);

int printf_octal(unsigned int arg);

int printf_binary(unsigned int arg);

int _printf(const char *format, ...);

int printf_uppercase(unsigned int arg);

int printf_hexadecimal(unsigned int arg);

int printf_unsigned_int(unsigned int arg);

int functions_handler(const char *format, va_list args);

#endif /*MAIN.H*/
