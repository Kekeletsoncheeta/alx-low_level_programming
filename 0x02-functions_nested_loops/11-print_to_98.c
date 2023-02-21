#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	n = add(89, 9);
	if (n < 0)
{
		return (1);
}
	if (n / 10 != 0)
{
		_putchar(n / 10 + '0');
}
	_putchar(n % 10 + '0');
	_putchar('\n');
	return (0);
}
