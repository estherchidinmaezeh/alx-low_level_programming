#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Char;
	int Int;
	long int LInt;
	long long int LL;
	float Float;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(Char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(Int));
	printf("Size of an long int: %lu byte(s)\n", (unsigned long) sizeof(LInt));
	printf("Size of an long long int: %lu byte(s)\n", (unsigned long) sizeof(LL));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(Float));
	return (0);
}
