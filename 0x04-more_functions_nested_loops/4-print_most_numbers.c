#include "main.h"

/**
 *void print_most_numbers - prints the numbers, from 0 to 9,except 2 and 4 followed by a new line
 *Return: 0
 */

void print_most_numbers(void)

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
