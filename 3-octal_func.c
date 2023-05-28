#include "main.h"

/**
 * print_oct - converts an unsigned int in octal format.
 * @l: The list of arguments.
 *
 * Return: Quantity of binary digits printed.
 */
int print_oct(va_list l)
{
	unsigned int n = va_arg(l, unsigned int);
	char c;
	int ctr = 0, q = 0, j = 0, octal[32];

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
			octal[q] = n % 8;
			n = n / 8;
			ctr++;
			q++;
		}

		for (j = q - 1; j >= 0; j--)
		{
			c = octal[q] + '0';
			write(1, &c, 1);
		}
		return (ctr);
	}
}


