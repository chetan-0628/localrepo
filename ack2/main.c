#include <stdio.h>
#include <stdlib.h>

void main()

{

FILE *fp,*fp1;

int ch;



fp=fopen("ex_file4.c","r");

fp1=fopen("ex_file2.c","w");

if(fp==NULL)

printf("File is not available");

ch=getc(fp);

while(ch!=EOF)

{

putc(ch,fp1);

ch=getc(fp);

}

fclose(fp);

fclose(fp1);

getch();

}
