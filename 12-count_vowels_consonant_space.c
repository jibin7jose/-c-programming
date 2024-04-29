//no of vowels, consonants and spaces

#include<stdio.h>
void main()
{
        char str[20];
        int v=0,c=0,s=0;
        printf("Enter a string\n");
        gets(str);
        for(int i=0;str[i]!='\0';i++)
        {
                if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
                        str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                        v++;
                else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
                        c++;
                else if(str[i]==' ')
                        s++;
        }
        printf("Number of vowels = %i\nNumber of consonants = %i\nNumber of spaces = %i\n",v,c,s);
}
