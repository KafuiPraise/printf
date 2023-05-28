#include "main.h"
/**
 * print_bin - Displays an unsigned integer in hexadecimal,
 * using lowercase letters.
 * @l: The list of arguments.
 * Return: Quantity of binary digits printed.
 */
int print_bin(va_list l)
{
	unsigned int n = va_arg(l, unsigned int);
	char c;
	int ctr = 0, g = 0, j = 0, binary[32];

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
			binary[g] = n % 2;
			n = n / 2;
			ctr++;
			g++;
		}
		for (j = g - 1; j >= 0; j--)
		{
			c = binary[j] + '0';
			write(1, &c, 1);
		}
	}
	return (ctr);
}
