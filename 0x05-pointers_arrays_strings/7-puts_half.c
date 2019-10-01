#include "holberton.h"
/**
* puts_half - Prints half
*@str: string to print
*Return: 0 (success)
*/
void puts_half(char *str)
{
int i, x, l;
x = 0;
while (*(str + x) != '\0')
x++;
l = x;
x = x / 2;
if (l % 2 != 0)
{
x++;
}
for (i = 0; i < l; i++)
{
if (i >= x)
_putchar(*(str + i));
}
_putchar('\n');
}
