#include <stdio.h>
#include <stdlib.h>

 char parser(char str[])
{   int a;
    a=strlen(str);
    for (int i = 5; i < a-5; i++)printf("%c",str[i]);}
int main()
{
    char str[] = "<h1> This is the heading <h1>";
    printf("The parcer is: ");parser(str);
    return 0;
}
