#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - creates a pwd of x 2772
 *
 * Return:0;
 */
int main(void)
{
int i, r, x;
char array[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char pwd[100];
srand(time(NULL));
x = 0;
i = 0;
while (x < (2772 - 122))
{
r = rand() % 62;
pwd[i] = array[r];
x = x + pwd[i];
i++;
}
r = 2772 - x;
pwd[i] = r;
i++;
pwd[i] = '\0';
printf("%s", pwd);
return (0);
}
