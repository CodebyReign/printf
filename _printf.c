<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

=======
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - function my printf
 * @format: string whit format to print
 * Return: number of chars that print
 */

int _printf(const char *format, ...)
{
va_list args;
int length = 0;
if (format == NULL)
return (-1);
va_start(args, format);
length = _printf_format(format, args);
va_end(args);
return (length);
=======
#include "main.h"
>>>>>>> 5fb16337c2541cb83d6c6388128f471095c9217c
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

va_start(args, format);

length = _print_format(format, args);
va_end(args);
<<<<<<< HEAD
return (length);
=======
return (len);
>>>>>>> 4cce60951393a88f639bce10481ed4a00c4056ed
>>>>>>> 5fb16337c2541cb83d6c6388128f471095c9217c
}
