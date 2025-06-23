#include <stdio.h>
#include <string.h>
  int main()
{
    char str[30];
    printf("Enter the array you want to reverse.\n");
    gets(str);
    printf("\n");

    puts(strrev(str));


    return 0;
}
