#include "main.h"

/**
 * print_alphabet - print alphabets in lower case 
 *
 * Return: Zero 
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
