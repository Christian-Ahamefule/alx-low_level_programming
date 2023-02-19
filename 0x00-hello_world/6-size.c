#include <stdio.h>
/**
 * main - entry point
 * Return : 0
 */
int main(void)
{
	printf("size of char: %i byte(s)\n",sizeof(char));
	printf("size of int: %i bytes(s)\n,"sizeof(int));
	printf("size of float: %i bytes(s)\n",sizeof(float));
	printf("size of long long int: %i byte(s)\n",sizeof(long long int));
	printf("size of long int: %i byte(s)\n",sizeof(long int));
	return (0);
}
