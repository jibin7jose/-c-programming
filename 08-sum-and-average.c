//Sum and average of array

#include<stdio.h>
void main()
{
        int a[20],n;
        float avg,sum=0;
        printf("Enter the array size\n");
        scanf("%i",&n);
        printf("Enter the array elements\n");
        for(int i=0;i<n;i++)
        {
                scanf("%i",&a[i]);
                sum+=a[i];
        }
        avg=sum/n;
        printf("Sum of the elements is %.2f\n",sum);
        printf("Average of the elements is %.2f\n",avg);
}
