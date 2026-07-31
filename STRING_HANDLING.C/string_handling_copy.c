#include<stdio.h>
#include<string.h>
void strcopy(char x[20],char y[20])
{
    int i=0;
    while(y[i]!='\0')
    {
        x[i]=y[i];
        i++;
    }
    x[i]='\0';
    
}
void main()
{
    char fro[20];
    char dest[20];
    printf("Enter a string :");
    gets(fro);
    strcopy(dest,fro);
    printf(dest);
}