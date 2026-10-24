// gives the sum of digit 
#include<stdio.h>
void main() {
    int n, k, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0) {
        k=n%10;
        sum=sum+k;
        n=n/10;
    }
    printf("Sum = %d",sum);
}
