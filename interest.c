#include<stdio.h>
int main () {
    float p,t,r,si;
    printf("enter the values of p,t,r: ");
    scanf("%f %f %f",&p,&t,&r);
    si = (p*t*r)/100;
    printf("simple interest = %.2f", si);
    return 0;
    
}