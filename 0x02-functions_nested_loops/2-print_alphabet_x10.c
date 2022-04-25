<<<<<<< HEAD
#include "main.h"
=======
#include "holberton.h"
>>>>>>> a7a26f1e6df0815282ebbe9b8cb046a4f1ff93b0

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
