#include<stdio.h>
int str_compare(char str1[20],char str2[20])
{
    int i;
    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if (str1==str2)
        {
            return 1;
        }
        return 0;
    }
        
}
void main()
{
    int returned_value;
    char str1[20]="chandra ";
    char str2[20]="chandru ";
    returned_value=str_compare(str1,str2);
    if (returned_value==1)
        {
            printf("The strings are equall !\n");
        }
        else
        {
            printf("The strings are not equal !\n");
        }
    
}