#ifndef _MAIN_H_
#define _MAIN_H_
#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>

/**
 * struct type - structure type
 * @c: character to check
 * @ptr_f: pointer of function
 */
typedef struct type
{
	char c;
	int (*ptr_f)(va_list);
} type;
int _printf(const char *format, ...);
int _prints(va_list);
int _printc(va_list);
int _printd(va_list);
int _printb(va_list);
int  write_integer(int);
int  write_uninteger(unsigned int, int);
int _printu(va_list);
int _printb(va_list);
int _printo(va_list);
int write_octal(unsigned int);
int (*get_specifier_func(char))(va_list);
int write_x(unsigned int);
int _printx(va_list);
int write_X(unsigned int);
int _printX(va_list);
int _printp(va_list);
#endif /* _MAIN_H_ */
