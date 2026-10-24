#include<stdio.h>
void main () {
    int n;
    printf("Enter the number of digits: ");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    printf("Enter %d digits: ",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("\n Sum = %d",sum);
}