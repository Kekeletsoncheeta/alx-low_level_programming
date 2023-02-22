#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 1, b = 2, c, i;

	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('2');
	putchar(',');
	putchar(' ');

	for (i = 2; i < 98; i++)
{
	c = a + b;
	a = b;
	b = c;

	int num = c;
	int digits = 0;

	while (num != 0)
{
	num /= 10;
	digits++;
}

	num = c;
	while (digits > 0)
{
	int digit = num / pow(10, digits - 1);
	putchar(digit + '0');
	num -= digit * pow(10, digits - 1);
	digits--;
}

	if (i != 97)
{
	putchar(',');
	putchar(' ');
}
}

	putchar('\n');
	return (0);
}
