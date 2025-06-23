#include<stdio.h>
int main()
{
float a,b;
char c;
printf("enter the values of a,c,b\n");
scanf("%f%c%f",&a,&c,&b);
switch (c)
{




case'+':
    printf(" %f",a+b);
    break;
case'-':
    printf("%f",a-b);
    break;
case '*':
    printf("mul is %f",a*b);
    break;
default:
    printf("invalid");
    break;
}
return 0;
}
