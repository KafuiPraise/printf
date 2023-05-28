#include "main.h"

/**
 * print_c - It prints a character
 * @l: The list of arguments
 *
 * Return: 1
 */
int print_c(va_list l)
{
	int retVal;
	char c = va_arg(l, int);

	retVal = write(STDOUT_FILENO, &c, 1);
	return (retVal);
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
	int ctr = 0, retVal;

	str = va_arg(l, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str != '\0')
	{
		retVal = write(STDOUT_FILENO, str, 1);
		if (retVal == -1)
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
	int length = 0, j, retVal;

	if (!str)
		str = "(null)";

	while (str[length] != '\0')
		length++;

	for (j = length - 1; j >= 0; j--)
	{
		retVal = write(1, &str[j], 1);
		if (retVal == -1)
			return (-1);
	}

	return (length);
}


