/*Write a program to count the occurrence of a given character in a given string.*/

#include<stdio.h>
int main()
{
    char str[10]="ababcdabcd";
    char ch='d';
    int i,count=0;
    for(i=0;i<10;i++)
    {
        if(ch == str[i])
        {
            count++;
        }
    }
    printf("occurance of %c is %d",ch,count);
    
    return 0;
}