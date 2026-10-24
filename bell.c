#include<stdio.h>
void main () 
    {
      int i, j, n;
      printf("enter a number of rows: ");
      scanf("%d",&n);
      for(i=n; i>=1; i--) { // outer loop for number of rows // runs from 1 to n
            for(j=i; j>=1; j--) { // inner loop for number of columns // runs from 1 to i 
            printf("*");
         

         }
         printf("\n");

      }
    } 