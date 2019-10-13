#include <stdio.h>

    /**
 *main - ayeeeee
 *@argc: arg1
 *@argv: arg2
 *Return: return
 */
int main(int argc, char *argv[])
{
    int name;

    for(name = 0; name < argc; name++)
    printf("%s\n", argv[name]);
    return(0);
}
