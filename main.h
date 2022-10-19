#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/** General Functions */
int _printf(const char *format, ...);
/** Frequently Used functions */
unsigned int _strlen(const char *);
void *_strcpy(char *dest, const char *src);
int _write_char(char c);
/** Structures */
typedef struct symbols_function
{
char *symbol;
void (*function)(va_list, int *);
} s_f;
/** Paser-like functions */
void print_char(va_list, int *);
void print_string(va_list, int *);
void print_perc(va_list, int *);
void _parser(char *, int *, s_f *, va_list);
#endif
