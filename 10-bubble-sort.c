//Bubble sort

#include<stdio.h>
void main()
{
        int a[20],n,i,j,t;
        printf("Enter the array size\n");
        scanf("%i",&n);
        printf("Enter the array elements\n");
        for(i=0;i<n;i++)
                scanf("%i",&a[i]);
        for(i=0;i<n;i++)
                for(j=0;j<n-i-1;j++)        
                        if(a[j]>a[j+1])
                        {
                                t=a[j];
                                a[j]=a[j+1];
                                a[j+1]=t;
                        }
        printf("Array after bubble sort\n");
        for(i=0;i<n;i++)
                printf("%i ",a[i]);
}
