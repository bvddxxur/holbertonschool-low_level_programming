#include "holberton.h"
/**
* _strlen - returns the full lenght of a string
*@s: pointer of character
*Return: the length of a string
*/
int _strlen(char *s)
{
int x;
x = 0;
while (*(s + x) != '\0')
x++;
return (x);
}
