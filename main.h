#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *, ...);
void _printchars(char *, int **);
void _printer(const char *, va_list, int **);
void _printchar(char, int **);
#endif
