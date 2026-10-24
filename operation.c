#include<stdio.h>
int main () {
    int a , b;
    printf("enter two numbers: :");
    scanf("%d  %d",&a,&b);
    
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    printf("sum = %d",sum);
    printf("\n difference = %d", sub);
    printf("\n product = %d", mul);
    return 0;

}