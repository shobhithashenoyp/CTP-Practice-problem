#include<stdio.h>
void main () {
    int arr[100];
    int n;
    printf("\n Enter number of elements: \n");
    scanf("%d",&n);
    printf("\n Enter %d elements: \n",n);
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int sum = 0, esum = 0, osum = 0;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
        if(arr[i] % 2 == 0) {
            esum = esum + arr[i];
        } else {
            osum = osum + arr[i];
        }
    }
    printf("\n Total sum: %d", sum);
    printf("\n sum of even elements: %d",esum);
    printf("\n sum of odd elements: %d", osum);
    

}