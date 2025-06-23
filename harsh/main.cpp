// Online C compiler to run C program online
// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

    // Write C code here
   int len(char s[10])
   {int r=0;
   for(int i=0;s[i]!='\0';i++)
     {
       r++;
  }
   return r;
   }
   void cmp(char s[10],char s1[10])
   {
       if(len(s)==len(s1))
       {
           for(int i=0;s[i]!='\0';i++)
           {
              if( s1[i]!=s[i])
              {
                  printf("not equal\n");
                  exit(0);
              }

           }
           printf("they are equal\n");

       }else
       printf("they are not equal\n");
   }
   void cnt(char s[20],char s1[10])
   {
       int k=len(s);

       for(int i=0;s1[i]!='\0';i++)
       {
           s[k]=s1[i];
           k++;
       }
       s[k]='\0';
       printf("%s\n",s);
   }
   int main()
   {
       char s[10],s1[10];
       printf("enter ");
       scanf("%s%s",s,s1);
       printf("the length of both the strings %d,%d\n",len(s),len(s1));
       cmp(s,s1);
       cnt(s,s1);

   }
