#include "main.h"
/**
 * _printf - output value to stdio
 * @format: argument
 * Return: integer
 */

int _printf(const char *format, ...)
{
	int len = 0;
	f_id func_list[] = {
		{"c", _print_char},
		{"s", _putstr},
		{"%", _print_percent},
		{"d", _print_int},
		{"i", _print_int},
		{"b", _print_binary},
		{NULL, NULL}
	};
	va_list args;
	
	if (!format)
		return (-1);
	
	va_start(args, format);

/* cleaned up not to exceed 40line requirements,*/
/* identified function created*/
	len = _identifier(format, func_list, args);
	va_end(args);
	
	return (len);
}


/**
 * _identifier - marches id to functions
 * @format: argument
 * @func_list: argument
 * @args: argument
 * Return: integer
 */

int _identifier(const char *format, f_id func_list[], va_list args)
{
	int i, j, len = 0;
	
	if (!format)
		return (-1);
	
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func_list[j].id != NULL; j++)
			{
				if (format[i + 1] == func_list[j].id[0])
				{
					len += func_list[j].func(args);
					break;
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	return (len);
}
