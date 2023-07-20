#include "main.h"

/**
* print_diagonal - print a diagonal line
*
* @n: is the number of times the \ character should be printed
*/

void print_diagonal(int n)
{
	int x, c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (c = 0 instead of c = 0)
				_putchar(' ');
			_putchar(92);/*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
