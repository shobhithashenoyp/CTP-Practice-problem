#include<stdio.h>
void main () {
    int km,m,cm;
    printf("Enter distance in kilometer : ");
    scanf("%d", &km);
    m = km * 1000;
    cm = km * 100000;
    printf("\n Distance in meter : %d", m);
    printf("\n  Distance in centimeter : %d", cm);

} 