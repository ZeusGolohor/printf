#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
unsigned int _strlen(const char *format);
void *_strcpy(char *dest, const char *src);
int _write_char(char c);
typedef struct symbols_function
{
char *symbol;
void (*function)(va_list, int *);
} s_f;
void print_char(va_list list, int *count);
#endif
