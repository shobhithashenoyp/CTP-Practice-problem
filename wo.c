#include<stdio.h>
void main () {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age >= 18) {
        if (age> 60) {
            printf(" \n You are not eligible to work");
        } else {
            printf(" \n You are eligible to work");

        }
    } else {
        printf("\n You are not eligible to work");
        
    }
}