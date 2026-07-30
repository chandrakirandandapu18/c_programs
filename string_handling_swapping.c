#include<stdio.h>
#include<string.h>

void swap(char x[20])
{

    int temp,len,i,j;
    len=strlen(x);
    for (i=0, j=len-1;i<j;i++,j--)
    {
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
    }
    printf(x);
}
void main()
{
    
    char str[20];
    printf("Enter a string : ");
    gets(str);

    void swap(char [20] );
    swap(str);
}