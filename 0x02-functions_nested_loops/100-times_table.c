#include "main.h"
/**
* three_dig - prints the series of characters if i * j is > 100
* @n: number to analyze
*
* Return: nothing
*/
void three_dig(int n)
{
	_putchar(',');
	_putchar(' ');
	_putchar(n / 100 + '0');
	if ((n / 10) % 10 <= 0)
		_putchar('0');
	else
		_putchar((n % 100) / 10 + '0');
	_putchar(n % 10 + '0');
}
/**
* print_times_table - prints the n times table, starting with 0
* @n: the number times table
*
* Return: nothing
*/
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (i = 0; i <= n; i++)
			{
				product = i * j;
				if (product > 99)
				{
					three_dig(product);
				}
				else if (product / 10 > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar((product) % 10 + '0');
					}
					else if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(product % 10 + '0');
					}
					else
						_putchar(product % 10 + '0');
			}
			_putchar('\n');
		
		}
	}
}
