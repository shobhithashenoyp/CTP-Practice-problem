#include<stdio.h>
void main () {
    int a[100],n,i,low,high,mid,key,flag=0;
    printf("\n Enter the size of the array: \n");
    scanf("%d",&n);
    printf("\n Enter %d element in ascending order: \n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element to be searched: \n");
    scanf("%d",&key);
    low = 0;
    high = n-1;
    while(low<=high) {
        mid = (low+high)/2;
        if(a[mid]==key) {
            flag=1;
            break;
        } else if(a[mid]<key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if(flag == 1) {
        printf("\n Element %d found at position %d\n", key, mid+1);
    } else {
        printf("\n Element %d not found in the array\n", key);
    }
}

