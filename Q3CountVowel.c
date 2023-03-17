/*Write a program to count vowels in a given string*/
#include<stdio.h>
int main()
{
    char str[10]="himanshu";
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
    }
    printf("%d vowels in the given string",count);
    return 0;
}