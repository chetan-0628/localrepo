#include <stdio.h>

int main()
{
    float days, years , weeks;
    printf("enter days\n");
    scanf("%f",&days);
    years=days/365;
    weeks=days/52;
    printf("years is %f\n",years);
    printf("weeks is %f\n",weeks);
    return 0;

}
