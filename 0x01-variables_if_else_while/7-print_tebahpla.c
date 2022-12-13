#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always0 (Success)
 */
int main(void)
{
	char lower_case_rev = 'z';

	while (lower_case_rev >= 'a')
	{
		putchar(lower_case_rev);
		lower_case_rev--;
	}
	putchar('\n');
	return (0);
}
