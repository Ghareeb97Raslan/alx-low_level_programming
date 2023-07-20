#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes tye character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 *         on error, -1 is retuernd, and errno is set apperopriately.
 */

int _putchaar(char c)
{
      return (write(1, &c, 1));
}

