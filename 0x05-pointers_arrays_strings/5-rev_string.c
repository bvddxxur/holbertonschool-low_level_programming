#include "holberton.h"
/**
* rev_string - reverse
*@s: string to reverse
*Return: Nothing
*/
void rev_string(char *s)
{
int x, i;
char c;
x = 0;
while (*(s + x) != '\0')
x++;
x--;
for (i = 0; i < x; i++)
{
c = *(s + x);
*(s + x) = *(s + i);
*(s + i) = c;
x--;
}
}
