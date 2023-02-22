#include "holberton.h"

int main(void)
{
	int a = 0, b = 1, c, i, num;

	_putchar('Enter the number of terms: ');
	scanf("%d", &num);
	_putchar('\n');

	_putchar('Fibonacci Series: ');
	for (i = 1; i <= num; ++i)
{
	_putchar(a + '0');
	_putchar(',');
	_putchar(' ');
	c = a + b;
	a = b;
	b = c;
}

	return (0);
}
