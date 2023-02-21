#include <stdio.h>
/**
 * main - Entry point
 * using the putchar function to print alphabet in lower case
 * Retutn 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
