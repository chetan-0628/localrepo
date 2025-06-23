#include <stdio.h>
#include <stdlib.h>

int main()
{  int*p1,*p2;
   int a,b;
    p1=1000,p2=2000;
   *p1=5,*p2=10;
   a=&p1; b=&p2;
   printf("%d %d",p1,a);
   printf("%d %d",b,*p2);
   printf("%d %d",p2-p1,*p1**p2);
    return 0;
}
