/*Write a program to calculate the length of the string. (without using builtin method)*/
#include<stdio.h>
int main()
{
    char str[10]="Himanshu";
    int i,count=0;
    for(i=0;str[i] != '\0';i++)
    {
        count++;
    }
    printf("lenght of the string is = %d\n",count);
    return 0;
}