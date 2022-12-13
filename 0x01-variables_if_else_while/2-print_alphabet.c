#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwasy 0 (Success)
 */
int main(void)
{
	char lower_case_alpha = 'a';

	while (lower_case_alpha <= 'z')
	{
		putchar(lower_case_alpha);
		lower_case_alpha++;
	}
	putchar('\n');
	return (0);
}
