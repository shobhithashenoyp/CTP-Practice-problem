#include<stdio.h>
int main() {
    printf("\n Enter age: ");
    int age;
    scanf("%d",&age);
    age>=18 ? printf("\n adult"):printf("\n minor");
    return 0;
    
}