#include "main.h"

/**
*  * * main - Entry point
*
* Description: print _putchar using putchar prototype
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int ch;
	char str[] = "_putchar";

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
