/*Write a program to convert a given string into lowercase
*/
#include<stdio.h>
int main()
{
    char str[]="ABABCBACD";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 || str[i]<= 90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s\n",str);
    return 0;
}