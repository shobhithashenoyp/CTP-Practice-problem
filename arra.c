#include<stdio.h>
void main () {
    int a[50],b[50],n,i,c[50];
    printf("\n Enter number of elememnts : ");
    scanf("%d",&n);
    printf("\n Enter the elements of array A ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);

    }
printf("\n Enter the elements of array B");
for(i=0;i<n;i++) {
    scanf("%d",&b[i]);
}
for(i=0;i<n;i++) {
    c[i] = a[i] + b[i];
}
printf("\n The sum of the arrays is: ");
for(i=0;i<n;i++) {
    printf("%d ",c[i]);
}
}