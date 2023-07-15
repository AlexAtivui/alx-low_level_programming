#include <stdio.h>
/**
 * main - reverse
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	char reve = 'z';

	while (reve >= 'a')
	{
		putchar(reve);
		reve--;
	}
	putchar('\n');
	return (0);
}
