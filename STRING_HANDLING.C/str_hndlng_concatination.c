#include<stdio.h>
#include<string.h>
void str_concat(char x[20],char y[20])
{
    int len,i,j=0;
    len=strlen(x);
    for(i=len;y[j]!='\0';i++,j++)
    {
        x[i]=y[j];
    }
    x[i]='\0';
    
}
void main()
{
    char str1[20]="chandra ";
    char str2[20]="kiran";
    printf("Before concating of str1: %s \n",str1);
    printf("Before concating of str2: %s \n",str2);
    str_concat(str1,str2);
    printf("After concating of str1: %s \n",str1);
    
    
}
