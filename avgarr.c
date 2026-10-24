#include<stdio.h>
void main () {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    float avg, sum=0;
    int arr[n];
    printf("\n Enter %d numbers: \n",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    avg = sum/n;
    printf("\n Average = %.2f",avg);
}