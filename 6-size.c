#include<stdio.h>
/**
* main -Entry point
*
* Return: Alwyas 0 (Saccess)
*/
int main()
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long long: %zu bytes\n", sizeof(long long int));
	printf("Size of a float: %zu bytes\n", sizeof(float));
}
