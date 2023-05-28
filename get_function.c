#include "main.h"
/**
 * get_func - selects a suitable function to execute
 * transition based on the format specifier
 *
 * @l: arguments list
 * @k: character before format specifier
 * @c: format specifier character
 *
 * Return: Quantity of characters printed
 */
int get_func(va_list l, char k, char c)
{
	int count = 0;

	if (c == 'c')
		count += print_c(l);
	else if (c == 's')
		count += print_s(l);
	else if (c == 'd' || c == 'r')
		count += print_r(l);
	else if (c == '%')
	{
		write(1, "%", 1);
		count++;
	} else if (c == 'b')
		count += print_bin(l);
	else if (c == 'o')
		count += print_oct(l);
	else if (c == 'x')
		count += print_x(l);
	else if (c == 'X')
		count += print_X(l);
	else if (c == 'u')
		count += print_u(l);
	else if (c == 'r')
		count += print_rev(l);
	else if (c == 'R')
		count += print_rot13(l);
	else if (c == 'S')
		count += print_S(l);
	else if (c == 'p')
		count += print_p(l);
	else
	{
		write(1, &k, 1);
		write(1, &c, 1);
		count += 2;
	}
	return (count);
}

