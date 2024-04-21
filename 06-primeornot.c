//Prime or not

#include<stdio.h>
#include<stdlib.h>
void main()
{
        int n,x,f=0;
        printf("Enter a number\n");
        scanf("%i",&n);
        if(n==1)
        {
                printf("\n%i is not a prime number\n",n);
                exit(0);
        }
        if(n==2)
        {
                printf("\n%i is a prime number\n",n);
                exit(0);
        }
        for(x=2;x<=n/2;x++)
        {
                if(n%x==0)
                {
                        printf("%i is not a prime number\n",n);
                        f=1;
                        break;
                }

        }
        if(f==0)
                printf("%i is a prime number\n",n);        
}
