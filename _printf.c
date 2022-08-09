#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include "main.h"
=======
<<<<<<< HEAD
#include "main.h"
=======
#include "holberton.h"
>>>>>>> eda4dac69d56e625ad275b70af077a55c7cf33b5

>>>>>>> 8aa83360eb3e34cfea81b91aeb6a2529a41b4ea3
/**
 * _printf - function my printf
 * @format: string whit format to print
 *
 * Return: number of chars that print
 */
int _printf(const char *format, ...)
{
va_list args;
int length = 0;

if (format == NULL)
return (-1);
<<<<<<< HEAD
va_start(args, format);
=======

va_start(args, format);

>>>>>>> 8aa83360eb3e34cfea81b91aeb6a2529a41b4ea3
length = _print_format(format, args);
va_end(args);
return (length);
}
