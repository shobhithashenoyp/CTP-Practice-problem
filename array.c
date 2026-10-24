#include<stdio.h>
void main () {
    float price[3];
    float total[3];
    printf("Enter the price of 3 items: \n");
    for(int i = 0; i< 3; i++) {
        scanf("%f",&price[i]);

     } for(int i = 0; i<3 ; i++){ 
        total[i] = price[i] + (price[i]*18)/100;
        printf("Final price = %.2f \n", total[i]);

     }

    }
