#include<stdio.h>
void main() {
int age;
printf(" Enter your age : ");
scanf("%d",&age);
if(age>=18) {
    printf("\n You can vote");

} else if (age<=18 && age>0) {
    printf("\n You can,t vote");
} else {
    printf("\n Invalid input");
    
}
}
