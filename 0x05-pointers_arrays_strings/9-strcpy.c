#include "holberton.h"
/**
* *_strcpy - copies the string
*@dest: copie of the string
*@src: origin of the string
*Return: dest destine copie
*/
char *_strcpy(char *dest, char *src)
{
int x;
for (x = 0; src[x] != '\0'; x++)
{
dest[x] = src[x];
}
dest[x] = '\0';
return (dest);
}
