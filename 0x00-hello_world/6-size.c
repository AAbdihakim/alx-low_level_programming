# include <stdio.h>

/**
 * main - prints the size of various types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	printf("Size of a char:%2lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int:%2lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int:%2lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long long int:%2lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a float:%2lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
