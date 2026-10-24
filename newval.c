#include<stdio.h>
void main () {
    int a = 10;
    int *p;
    p = &a;
 printf("value of a is %d", a);
 printf("\n address of a is %p", &a);
 printf("\n value of p is %p", p);
 printf("\n value pointed by p is %d", *p);   
}