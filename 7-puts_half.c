#include "main.h"

/**
* puts_half - print
*
* @str: char array
*
* Description: if odd of char, print (length - 1) / 2
*/

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
