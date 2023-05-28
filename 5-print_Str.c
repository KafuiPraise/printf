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
