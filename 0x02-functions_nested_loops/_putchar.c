#include <unistd.h>

/**
 * main - prints _putchar, followed by a new line.
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
