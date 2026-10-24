#include<stdio.h>
void main () {
    int arr[5];
    printf("\n Enter 5 integers: \n");
    for(int i=0;i<5;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=4; i>=0; i--){
        printf(" %d ", arr[i]);
    }
}