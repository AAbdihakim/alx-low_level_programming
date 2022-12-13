#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int ltr = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (ltr <= 'f')
	{
		putchar(ltr);
		ltr++;
	}
	putchar('\n');
	return (0);
}
