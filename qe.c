#include<stdio.h>
#include<math.h>
void main () {
    float a,b,c,D,x1,x2,realpart,imgpart;
    printf("\n Enter coefficient a,b,c : ");
    scanf("%d %d %d", &a,&b,&c);
    if(a==0) {
        printf("\n Not a quadratic equation");
    }
    D = (b*b)-(4*a*c);
    if(D>0) {
        x1 == -b+sqrt(D)/(2*a);
        x2 == -b-sqrt(D)/(2*a);
        printf("\n Roots are real and different ");
        printf("\n X1 = %.2f \n x2 = %.2f", x1,x2);

    } else if(D==0) {
        x1 = x2 = -b/(2*a);
        printf("\n Roots are real and equal");
        printf("\n x1 = x2 = %.2f", x1);

    } else {
        realpart = -b/(2*a);
        imgpart = sqrt(-D)/(2*a);
        printf("\n Roots are complex and different ");
        printf("\n x1 = %.2f + %.2fi", realpart,imgpart);
        printf("\n x2 = %.2f - %.2fi", realpart,imgpart);
        
    }
    }  
    

