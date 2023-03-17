/*Write a program in C to copy one string to another string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="vijay";
    char str2[]="ajay";
    strcpy(str1,str2);
    printf("vijay of string 1 is '%s'\n",str1);
    return 0;
}