/*Write a C program to sort a string array in ascending order.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][7]={"raju","punji","ajay"};
    int i,j;
    
    char temp[20];
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%s\t",str[i]);
    }
    return 0;
}