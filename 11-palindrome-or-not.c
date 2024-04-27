//Palindrome or not

#include<stdio.h>
#include<string.h>
void main()
{
        char str[5];
        int n,f=0;
        printf("Enter a string\n");
        gets(str);
        n=strlen(str);
        for(int i=0;i<n/2;i++)
                if(str[i]!=str[n-i-1])
                {
                        printf("The given string is not a palindrome\n");
                        f=1;
                        break;
                }
        if(f==0)
                printf("The given string is a palindrome\n");
}
