<<<<<<< HEAD
#include "main.h"
=======
#include "holberton.h"
>>>>>>> a7a26f1e6df0815282ebbe9b8cb046a4f1ff93b0

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
