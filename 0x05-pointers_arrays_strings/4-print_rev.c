#include "holberton.h"
/**
* print_rev - prints in reverse
*@s: string to reverse
*Return: Nothing
*/
void print_rev(char *s)
{
int x;
x = 0;
while (*(s + x) != '\0')
x++;
x--;
for (; x >= 0; x--)
_putchar(*(s + x));
_putchar('\n');
}
