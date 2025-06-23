#include <stdio.h>
#include <string.h>
void main()
{
    char str1[50];
    int i, count;
    printf("enter the string\n");
    scanf("%s\n",str1);
    count=0;
    for(i=0;str1[i]!='\0';i++)
    {
        count=count+1;
    }
    printf("the length of string is %d",count);
}
