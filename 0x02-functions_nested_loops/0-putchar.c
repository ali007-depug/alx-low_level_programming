#include <stdio.h>
/**
 * main- main function
 *
 * 
 * Return:0
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');

	return(0);
}
