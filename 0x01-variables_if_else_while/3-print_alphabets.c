#include <stdio.h>

/**
 * main - Printing alphabets
 *
 * Return: Always 0 (Sucess)
 *
 */
int main(void)
{
	char low = 'a';
	char upp = 'A';

	for (low ='a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (upp = 'A'; upp <= 'Z'; upp++)
	{
		putchar(upp);
	}
	putchar('\n');
	return (0);
}
