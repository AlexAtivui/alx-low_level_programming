#include <stdio.h>
/**
 * main - reverse
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	int reve = 122;

	while (reve >= 97)
	{
		putchar(reve);
		reve--;
	}
	putchar('\n');
	return (0);
}
