#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabets in lowercase, and then in upper case
 * followed by a new line
 * Return: Always 0.
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
