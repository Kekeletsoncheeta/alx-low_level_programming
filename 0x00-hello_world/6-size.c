#include <stdio.h>

/**
 * main - write "script that prints the size of various types
 * on the computer it is compiled and run on."
 * Return: Always 0.
 * sizeof evaluates the size of a variable
 */


int main(void)


{


	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long int: %zu bytes\n", sizeof(long int));
	printf("Size of long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of float: %zu bytes\n", sizeof(float));

	return (0);

}
