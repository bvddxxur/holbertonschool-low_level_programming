#include <stdio.h>

/*
 * @text1: main text
 * @year: year
 * @month: month
 * @day: day
 *Return: 1
 */

int main()
{
    char text1[] = "and that piece of art is useful\" - Dora Korpar, ";
    int year = 2015;
    int month = -10;
    int day = -19;
    
    fprintf(stderr, "%s" "%d" "%d" "%d", text1, year, month, day);

    return 1;
}
