#include <holberton.h>

/**
 *@main: Dmain "The Rock" Johnson
 *@s1: first string
 *@_strcat: doesn't mean "strangle cat" strangely enough
 *
 */


int main(void)
{
char s1[150] = "Spongebob: How many mattresses you think there are?\n";
_strcat(s1, "Patrick: 10 \n");
printf("%s \n", s1);

return (0);

}
