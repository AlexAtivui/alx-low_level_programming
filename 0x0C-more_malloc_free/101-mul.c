#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int find_len(char *str);
char * create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - finds the length of a string.
 * @str: the styring to be measured.
 *
 * Return: the length of the string.
 */

int _putchar(char c)
{
return (1, &c, 1);
}

void print_result(char *result) {
while (*result == '0' && *(result + 1) != '\0')
{
result++;
}

while (*result != '\0')
{
_putchar(*result);
result++;
}
_putchar('\n');
}

int is_digit(char *str)
{
while (*str != '\0')
{
if (*str < '0' || *str > '9')
{
return (0);
}
str++;
}
return (1);
}

char *multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j;
char *result;

while (num1[len1] != '\0') len1++;
while (num2[len2] != '\0') len2++;

result = malloc(len1 + len2 + 1);
if (result == NULL) {
perror("Memory allocation error");
exit(98);
}

for (i = 0; i < len1 + len2; i++)
result[i] = '0';
result[i] = '\0';

for (i = len1 - 1; i >= 0; i--)
{
int carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
int product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
carry = product / 10;
result[i + j + 1] = (product % 10) + '0';
}
result[i] += carry;
}

return (result);
}

int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}

char *result = multiply(argv[1], argv[2]);
print_result(result);

free(result);
return (0);
}
