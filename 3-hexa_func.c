#include "main.h"

/**
 * print_x - Displays an unsigned int in hexadecimal lower format.
 * @l: List of arguments.
 *
 * Return: Quantity of hexadecimal digits printed.
 **/
int print_x(va_list l)
{
	unsigned int n = va_arg(l, unsigned int);
	char c;
	int ctr = 0, g = 0, j = 0, low_hex[32];

	if (n == 0)
	{
		c = n + '0';
		write(1, &c, 1);
		return (1);
	}
	else
	{
		while (n > 0)
		{
			low_hex[g] = n % 16;
			n = n / 16;
			ctr++;
		g++;
		}

		for (j = g - 1; j >= 0; j--)
		{
			if (low_hex[j] > 9)
				c = 'a' + (low_hex[j] % 10);
			else
				c = low_hex[j] + '0';
			write(1, &c, 1);
		}
		return (ctr);
	}
}

/**
 * print_X - converts the unsigned int to hexadecimal and prints it.
 * @l: List of arguments.
 *
 * Return: number of hex digits output.
 **/
int print_X(va_list l)
{
	unsigned int n = va_arg(l, unsigned int);
	char c;
	int ctr = 0, g = 0, j = 0, up_hex[32];

	if (n == 0)
	{
		c = n + '0';
		write(1, &c, 1);
		return (1);
	}
	else
	{
		while (n > 0)
		{
			up_hex[g] = n % 16;
			n = n / 16;
			ctr++;
			g++;
		}

		for (j = g - 1; j >= 0; j--)
		{
			if (up_hex[j] > 9)
				c = 'A' + (up_hex[j] % 10);
			else
				c = up_hex[j] + '0';
			write(1, &c, 1);
		}
		return (ctr);
	}
}

