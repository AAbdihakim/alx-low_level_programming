#include <stdio.h>
/**
 * main - Print all the letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		if (lower_case != 'e' && lower_case != 'q')
		{
			putchar(lower_case);
		}
		lower_case++;
	}
	putchar('\n');
	return (0);
}
