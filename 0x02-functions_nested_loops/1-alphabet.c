#include "main.h"

/**
* print_alphabet -> prints the lowercase alphabets
* followed by a new line
*/
void print_alphabet(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}

