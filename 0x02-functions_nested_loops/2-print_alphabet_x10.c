#include "main.h"
/**
 * print_alphabet_x10 - alphabet,in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x, i;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
