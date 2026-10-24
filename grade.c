#include<stdio.h>
void main() {
    int m;
    printf("\n Enter marks: ");
    scanf("%d",&m);
    if(m<30 && m>=0) {
        printf("\n  C");
    } else if(m>=30 && m<70) {
        printf("\n B");
    } else if (m>=70 && m<90) {
        printf("\n A");
    } else if(m>=90 && m<=100) {
        printf("\n A+");
    } else { 
        printf("\n Invalid marks");

    }
}