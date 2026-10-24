#include<stdio.h>
void main () {
    int arr[5];
    printf("\n Enter 5 elements: \n");
    for(int i=0; i<5; i++) {
        scanf("%d",&arr[i]);
    } 
    int max = arr[0];
    int min = arr[0];
    for(int i=1; i<5; i++) {
        if(arr[i]>max) {
            max = arr[i];
        } 
        if(arr[i] < min) {
            min = arr[i];
        }
    } 
    printf("\n Greatest element : %d",max);
    printf("\n Smallest element : %d",min);
    

}