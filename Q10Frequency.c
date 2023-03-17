/*Write a program in C to Find the Frequency of Characters*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter a string of max size 20\n");

    gets(str);
    int hash[123]={0};
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        hash[str[i]]++;
    }
    char ch;
    printf("Enter charecter to count frequency\n");
    scanf("%c",&ch);
    for(i=0;i<123;i++)
    {
        if(i==ch)
        {
            printf("%d",hash[i]);
        }
    }
    return 0;
}