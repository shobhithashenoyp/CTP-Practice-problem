#include<stdio.h>
void main () {
    int a[3][3];
    int b[3][3];
    printf("\n Enter elements for first 3x3 matrx: \n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d",&a[i][j]);
            printf("\t ");//print space between elements
        } 
        printf("\n");
        

    }
    printf("\n Enter elements for second 3x3 matrix: \n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d",&b[i][j]);
            printf("\t ");//print space between elements  
        } 
        printf("\n");   
    }
    int sum[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf(" %d ", sum[i][j]);
        } 
        printf("\n");
    }
}