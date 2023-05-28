#include "main.h"

/**
 * hexa - Displays a char in hexadecimal upper format.
 * @n: The argument char.
 *
 * Return: Number of hexadecimal digits printed.
 */
int hexa(char n)
{
	char c;
	int ctr = 0, r = 0, j, up_hex[2];

	while (n > 0)
	{
		up_hex[r] = n % 16;
		n = n / 16;
		ctr++;
		r++;
	}

	for (j = r - 1; j >= 0; j--)
	{
		if (up_hex[j] > 9)
			c = 'A' + (up_hex[j] % 10);
		else
			c = up_hex[j] + '0';
		write(1, &c, 1);
	}

	return (ctr);
}
/**
 * print_S - Converts a string to printable characters and prints it.
 * hexadecimal representations
 * @l: A va_list containing the string to output
 *
 * Return: The number of characters to be printed
 */
int print_S(va_list l)
{
	char *str = va_arg(l, char *);
	int ctr = 0, r = 0, cas;

	if (str == NULL)
	{
		write(1, "\\x00", 4);
		return (4);
	}

	while (str[r] != '\0')
	{
		if (str[r] < 32 || str[r] >= 127)
		{
			write(1, "\\x", 2);
			ctr += 2;
			cas = str[r];

			if (cas < 16)
			{
				write(1, "0", 1);
				ctr++;
			}

			ctr += hexa(str[r]);
		}
		else
		{
			write(1, &str[r], 1);
			ctr++;
		}

		r++;
	}

	return (ctr);
}

