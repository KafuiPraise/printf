#include "main.h"

/**
 * _printf - Function that standardizes output
 * @format: Format specifies
 *
 * Return: The number of characters that was printed.
 */
int _printf(const char *format, ...)
{
	va_list l;

	int = r;

	int count = 0;

	va_start(l, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[r])
	{
		if (format[r] == '%')
		{
			r++;
			if (!format[r] || (format[r] == ' ' && !format[r + 1]))
			{
				count = -1;
				break;
			}
			else if (format[r])
			{
				count += get_func(l, format[r - 1], format[r]);
			}
		}
		else
		{
			write(1, &format[r], 1);
			count++;
		}
		r++;
	}

	va_end(l);
	return (count);
}




