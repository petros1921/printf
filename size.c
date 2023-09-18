#include "main.h"

/**
 * get_size - This Calculates the size to cast the argument
 * By Petros and Kidus
 * @format: A string format in which the argument is going to be printed.
 * @i: To be printed list of arguments
 * Return: success (size).
 */
int get_size(const char *format, int *i)
{
	int curr_z = *i + 1;
	int size = 0;

	if (format[curr_z] == 'l')
		size = S_LONG;
	else if (format[curr_z] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_z - 1;
	else
		*i = curr_z;

	return (size);
}
