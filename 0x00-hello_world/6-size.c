#include <stdio.h>
/**
 * main - entry point
 * Return : 0
 */
int main(void)
{
	char C;
	int t;
	float d;
	long long y;
	long z;
	printf("size of char: %ld byte(s)\n",sizeof(C));
	printf("size of int: %ld bytes(s)\n,"sizeof(t));
	printf("size of float: %ld bytes(s)\n",sizeof(d));
	printf("size of long long: %ld byte(s)\n",sizeof(y));
	printf("size of long: %ld byte(s)\n",sizeof(z));
	return (0);
}
