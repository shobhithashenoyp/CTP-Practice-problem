#include<stdio.h>
void main () {
    int arr[100];
    int n;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf(" \n Enter %d elements: \n");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int lar1 = arr[0];
    int lar2 = arr[0];
    for(int i=1; i<n ; i++) {
        if(arr[i] > lar1) {
            lar2 = lar1;
            lar1 = arr[i];
        }
        else if(arr[i] > lar2 && arr[i] != lar1) {
            lar2 = arr[i];
        }

    }
    if(lar2 == lar1) {
        printf("There is no second largest element\n");
    }
    else {
        printf("The second largest element is %d\n",lar2);
    }
}