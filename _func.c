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

