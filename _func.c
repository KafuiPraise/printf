#include "main.h"

/**
 * print_c - It prints a character
 * @l: The list of arguments
 *
 * Return: 1
 */
int print_c(va_list l)
{
	int rokaf;
	char c = va_arg(l, int);

	rokaf = write(STDOUT_FILENO, &c, 1);
	return (rokaf);
}

/**
 * print_s - Prints the string
 * @l: The list of arguments
 *
 * Return: quantity of characters that were printed
 */
int print_s(va_list l)
{
	char *str = NULL;
	int ctr = 0, rokaf;

	str = va_arg(l, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str != '\0')
	{
		rokaf = write(STDOUT_FILENO, str, 1);
		if (rokaf == -1)
			return (-1);
		str++;
		ctr++;
	}
	return (ctr);
}

/**
 * print_rev - Reverses a string and outputs it.
 * @l: List of inputs containing the string to be printed
 *
 * Return: The length of the string data
 */
int print_rev(va_list l)
{
	char *str = va_arg(l, char *);
	int length = 0, j, rokaf;

	if (!str)
		str = "(null)";

	while (str[length] != '\0')
		length++;

	for (j = length - 1; j >= 0; j--)
	{
		rokaf = write(1, &str[j], 1);
		if (rokaf == -1)
			return (-1);
	}

	return (length);
}
