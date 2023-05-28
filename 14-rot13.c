#include "main.h"

/**
 * print_rot13 - Encrypts a string using rot13
 * @l: Argument list
 *
 * Return: Number of characters displayed
 */
int print_rot13(va_list l)
{
	int r, j, ctr = 0;
	char *str, alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(l, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	for (r = 0; str[r]; r++)
	{
		for (j = 0; alph[j]; j++)
		{
			if (str[r] == alph[j])
			{
				ctr += write(1, &rot13[j], 1);
				break;
			}
		}
		if (!alph[j])
		{
			ctr += write(1, &str[r], 1);
		}
	}
	return (ctr);
}

