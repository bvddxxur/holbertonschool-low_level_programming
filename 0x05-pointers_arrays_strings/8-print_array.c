#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints the n elements
*@a: array to print
*@n: number of elements in the aray
*Return: Nothing
*/
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
if (x == (n - 1))
printf("%d", *(a + x));
else
printf("%d, ", *(a + x));
}
printf("\n");
}
