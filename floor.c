#include<stdio.h>
#include<math.h>
void main() {
    float num;
    int *ptr;
    
    
    printf(" Enter anumber : ");
    scanf("%f",&num);
printf(" Number = %f", num);
printf("\n floor value = %f", floor(num));
printf("\n ceil value = %f", ceil(num));
printf("\n round value = %f", round(num));
printf("\n trunc value = %f", trunc(num));
printf("\n address of num = %p", &num);
printf("\n address of &num = %p",*(&num)); 

}