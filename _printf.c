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
	int g = 0;
	int count = 0;

	va_start(l, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[g])
	{
		if (format[g] == '%')
		{
			g++;
			if (!format[g] || (format[g] == ' ' && !format[g + 1]))
			{
				count = -1;
				break;
			}
			else if (format[g])
			{
				count += get_func(l, format[g - 1], format[g]);
			}
		}
		else
		{
			write(1, &format[g], 1);
			count++;
		}
		g++;
	}

	va_end(l);
	return (count);
}






