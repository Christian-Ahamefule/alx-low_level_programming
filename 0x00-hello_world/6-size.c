#include <stdio.h>
/**
 * main - entry point
 * Return : 0
 */
int main(void)
{
	printf("size of char: %i byte(s)",sizeof(char));
	printf("size of int: %i bytes(s),"sizeof(int));
	printf("size of float: %i bytes(s)",sizeof(float));
	printf("size of long long int: %i byte(s)",sizeof(long long int));
	printf("size of long int: %i byte(s)",sizeof(long int));
}
