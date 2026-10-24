#include<stdio.h>
void main() {
   int n;
   printf("\n 1. addition \n 2. subtraction \n 3. multiplication \n 4. division");
   printf("\n Enter a number: ");
   scanf("%d",&n);
   int a,b;
   printf("\n Enter two numbers: ");
   scanf("%d",&a);
   scanf("%d",&b);

   switch(n) {
      case 1: printf("\n sum = %d",a+b) ; break;
      case 2: printf("\n Difference = %d",a-b);break;
      case 3: printf("\n Product = %d",a*b);break;
      case 4: printf("\n Quotient = %d",a/b);break;
      default: printf(" \n Invalid choice");

   }
}