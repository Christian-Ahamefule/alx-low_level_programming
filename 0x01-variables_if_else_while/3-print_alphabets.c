#include <stdh.io>
/**
 * main: Entry point 
 * Printing the alphabet in lower and upper case using putchar
 * return 0
 */

int main(void){
	char c = 'a';
	char b = 'A';

	while (c <= 'z'){
		putchar(c);
		c++;
	}

	while (b <= 'Z'){
		putchar(b);
		b++;
	}

	putchar('\n');

	return (0)
}
