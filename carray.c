#include<stdio.h>
void main () {
    int arr[10];
    printf("\n Enter 10 elements: \n");
    for(int i=0; i<10; i++) {
        scanf("%d",&arr[i]);
    } 
    int ei = 0;
    int oi = 0;
    for(int i=0; i<10; i++) {
        if(arr[i] % 2 == 0) {
            ei++;
        } else {
            oi++;

        }

        }
        printf("\n Even element: %d",ei);
        printf("\n Odd element: %d",oi);
    }
