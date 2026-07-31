#include<stdio.h>
#include<string.h>
void strncopy(char x[20],char y[20],int z)
{
    int i=0;
    for(i=0;i<z;i++)
    {
        x[i]=y[i];
    }
    x[i]='\0';
    
}
void main()
{
    int n;
    char fro[20];
    char dest[20];
    printf("Enter a string :");
    gets(fro);
    printf("Enter a value : ");
    scanf("%d",&n);
    strncopy(dest,fro,n);
    printf(dest);
}