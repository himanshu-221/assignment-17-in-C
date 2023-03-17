/*Write a program in C to count the total number of alphabets, digits and special
characters in a string*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="ab14h2ADhd@gh^3~`";
    int l, i,count1=0,count2=0,count3=0,count4=0;
    l=strlen(str);
    printf("the string is = %s\n",str);
    printf("Lenght of the string is %d\n",l);
    int flag[130]={0};
    for(i=0;str[i]!='\0';i++)
    {
        flag[str[i]]++;
    }
    
    for(i=0;i<130;i++)
    {
        
        // if(flag[i]==0)
        // {
        //     continue;
        // }
        // else
        // printf("%d is %d\t",i,flag[i]);
        if(i>='a' && i<='z')
        {
            count1+=flag[i];
        }
        else if(i>='A'&&  i<='Z')
        {
            count2+=flag[i];
        }
        else if(i>=49 && i<=57)
        {
            count3+=flag[i];
        }
        else
        {
            count4+=flag[i];
        }
    }
    printf("\nNo. of alphabet = %d",count1);
    printf("\nNo. of ALPHABET = %d",count2);
    printf("\nNo. of Digits = %d",count3);
    printf("\nNo. of Special charecters = %d",count4);
    return 0;
    
}