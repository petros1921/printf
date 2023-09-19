#include "main.h"

/**
 * is_printable - Printable Character eill be evaluated
 * by petros and kidus
 * @c: The char which will be evaluated
 * Return: For success print 1 and 0 if not
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Hexadecimal code to buffer ASSCI
 * @buffer: Character Araye
 * @i: Appendeing starter Index
 * @ascii_code: ASSCI CODE
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Digit Verifier
 * @c: Evaluated character
 * Return: Digit : 1 Otherwise (0)
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Number to a specified size
 * @num: Given number to be cated
 * @size: A number which indicatet size of the number
 * Return: Value of cated Number
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Castes a Number to a specified number
 * @num: The number which will be casted
 * @size: indicator of the type to be casted
 * Return: Value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
