#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
int _printf(const char *, ...);
void _printchars(char *, int **);
void _printer(const char *, va_list, int **);
void _printchar(char, int **);
void _switch(const char *format, va_list ap, int **len, int **i);
void _printdecimal(int, int **);
void _printbinary(int, int **);
int _pow(int, int);
#endif
