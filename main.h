#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
<<<<<<< HEAD
* struct flags - struct containing flags to "turn on"
* when a flag specifier is passed to _printf()
* @plus: flag for the '+' character
* @space: flag for the ' ' character
* @hash: flag for the '#' character
*/
typedef struct flags
{
int plus;
int space;
int hash;
} flags_t;
=======
 * struct format - structure to pair format id to function
 * @id: The format identifies e.g %d, %c
 * @func: The functions for the id
 */
>>>>>>> e614c7dea405837a737c34ef34b685e9c222a68d

struct format
{
<<<<<<< HEAD
char c;
int (*f)(va_list ap, flags_t *f);
} ph;

/* print_nums */
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(nt i);
/* print_bases */
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
=======
	char *id;
	int (*func)(va_list);
};
>>>>>>> e614c7dea405837a737c34ef34b685e9c222a68d

typedef struct format f_id;

int _printf(const char *format, ...);
int _identifier(const char *format, f_id func_list[], va_list args);
int _putchar(char c);
int _putstr(va_list);
int _print_char(va_list arg);
int _print_percent(va_list arg);
int print_number(int n);
int _print_int(va_list arg);
int int_length(unsigned int n);
int get_exponent(int len);
int _print_binary(va_list);
int binary_len(unsigned int n);
char *rev_string(char *);
void _putbase(char *str);
char *_cpymem(char *dest, char *src, unsigned int n);

#endif
