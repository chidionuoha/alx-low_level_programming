#include "main.h"
/**
 * puts2 - function should prin onlyone character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
	if (i % 2 == 0)
		_putchar(str[i]);
}
	_putchar('\n');
}
