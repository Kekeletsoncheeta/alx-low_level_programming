#include <stdio.h>

/**main - write "script that prints the size of various types
 * on the computer it is compiled and run on."
 * Return Always 0.
 * sizeof evaluates the size of a variable
 */


int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	char charType;
	long long int longlongintType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of longint: %zu bytes\n", sizeof(longintType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of longlongint: %zu bytes\n", sizeof(longlongintType));

	return (0);
}
