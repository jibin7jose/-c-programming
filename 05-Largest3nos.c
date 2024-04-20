//Largest among 3 nos

#include<stdio.h>
void main()
{
        int a,b,c,l;
        printf("Enter three numbers\n");
        scanf("%i %i %i",&a,&b,&c);
        if(a>b)
        {
                if(a>c)
                        l=a;
                else
                        l=c;
        }
        else
        {
                if(b>c)
                        l=b;
                else
                        l=c;
        }
        printf("\nLargest among %i %i and %i is %i \n",a,b,c,l);
}
