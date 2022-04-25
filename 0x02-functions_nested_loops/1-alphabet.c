<<<<<<< HEAD
#include "main.h"
=======
#include "holberton.h"
>>>>>>> a7a26f1e6df0815282ebbe9b8cb046a4f1ff93b0

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
