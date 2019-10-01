#include "holberton.h"
/**
* puts2 - print one char
*@str: string to print
*Return: Nothing
*/
void puts2(char *str)
{
int x;
char c;
for (x = 0; *(str + x) != 0; x++)
{
if (x % 2 == 0)
{
c = *(str + x);
_putchar(c);
}
}
_putchar('\n');
}
