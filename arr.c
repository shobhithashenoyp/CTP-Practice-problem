#include<stdio.h>
void main () {
    int arr[10]; 
    printf("Enter 10 integers: \n");
    for(int i=0;i<10;i++) {
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];
    for(int i=0;i<10;i++) {
        if(arr[i]>largest) {
            largest = arr[i];
        }
        if(arr[i]<smallest) {
            smallest = arr[i];
        }
    }
    printf("Largest number is: %d\n", largest);
    printf("Smallest number is: %d\n", smallest);
}