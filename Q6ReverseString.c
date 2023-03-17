/*Write a program to reverse a string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="mohan";
    char temp;
    int i,l;    
    l=strlen(str);
    strrev(str);
    printf("%s",str);
    for(i=0;i<l/2;i++)
    {
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
    printf("\n%s",str);
    return 0;
    
}