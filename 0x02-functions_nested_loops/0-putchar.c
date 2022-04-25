<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Prints _putchar as a message.
=======
#include "holberton.h"

/**
 * main - Prints Holberton as a message.
>>>>>>> a7a26f1e6df0815282ebbe9b8cb046a4f1ff93b0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
=======
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
>>>>>>> a7a26f1e6df0815282ebbe9b8cb046a4f1ff93b0
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
