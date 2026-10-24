#include<stdio.h>
void main() {
    int n;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    int fib1 = 0;
    int fib2 = 1;
    if(n<=0){
        printf("Please enter a positive number: ");
    } else if(n==1){
        printf("%d",fib1);
    } else {
        while(n>0){
            printf("%d \t",fib1);
            int nfib = fib1; 
            fib1 = fib2;
            fib2 = nfib + fib2;
            n--;

    

           
         
        }
    }
    }
