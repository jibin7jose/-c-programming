#include<stdio.h>

void main() 
{
   int i, j, k = 1;
   int level;

   printf("Enter the level: ");
   scanf("%d", &level);

   printf("\nFloyd's Triangle : \n");

   for (i = 1; i <= level; i++) 
   {
      for (j = 1; j <= level-i; j++)  // To print spaces in a row
        printf(" ");
        {
          for (j = 1; j <= i; j++, k++) 
          {
             printf("%d ", k);
          }
        }
      printf("\n");
   }

}
