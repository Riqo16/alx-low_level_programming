#include "main.h"
/**
 * print_alphabet_x10 - check description
 * description: print x10 the alphabet, in lowercase, follow by a new line.
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int h;

	for (h = 0; h < 10; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
