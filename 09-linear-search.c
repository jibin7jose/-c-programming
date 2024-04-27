//Linear search

#include<stdio.h>
void main()
{
        int a[20],n,s,f=0,i;
        printf("Enter the array size\n");
        scanf("%i",&n);
        printf("Enter the array elements\n");
        for(i=0;i<n;i++)
                scanf("%i",&a[i]);
        printf("Enter the element to be searched\n");
        scanf("%i",&s);
        for(i=0;i<n;i++)
                if(a[i]==s)
                {
                        printf("Element %i found at index %i\n",s,i);
                        f=1;
                        break;
                }        
        if(f==0)
                printf("Element %i not found\n",s);
}
