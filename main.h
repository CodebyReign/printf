<<<<<<< HEAD
#ifndef HOLBERTON_H
#define HOLBERTON_H
=======
#ifndef MAIN_H
#define MAIN_H
>>>>>>> ca84b663de4619c6a22ef58334e74f39494a4420

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
<<<<<<< HEAD

=======
<<<<<<< HEAD

=======
>>>>>>> ca84b663de4619c6a22ef58334e74f39494a4420
>>>>>>> 4cce60951393a88f639bce10481ed4a00c4056ed
/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
<<<<<<< HEAD
 *
 */

=======
 */
>>>>>>> ca84b663de4619c6a22ef58334e74f39494a4420
typedef struct format
{
char *id;
int (*f)();
} convert_match;

int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
<<<<<<< HEAD

=======
<<<<<<< HEAD

=======
>>>>>>> ca84b663de4619c6a22ef58334e74f39494a4420
>>>>>>> 4cce60951393a88f639bce10481ed4a00c4056ed
#endif
