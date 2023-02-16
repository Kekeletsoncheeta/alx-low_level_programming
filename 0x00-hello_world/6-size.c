#include <stdio.h>

/**
 * main - write "script that prints the size of various types
 * on the computer it is compiled and run on."
 * Return: Always 0.
 * sizeof evaluates the size of a variable
 */


int main(void)


{

	char charType;
	int intType;
	long int long intType;
	long long int long long intType;
	float floaType;


	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(long intType));
	printf("Size of long long int: %zu bytes\n", sizeof(long long intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	return (0);

}
