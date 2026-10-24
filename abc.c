#include<stdio.h>
#include<math.h>
void main() {
    float a,b,c,x1,x2,D,rpart,imgpart;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f",&a,&b,&c);
   
    if(a==0) {
        printf("Not a quadritic equation. \n");
            
    }
     D=(b*b)-(4*a*c);
     if(D>0) {
        printf("Roots are real and differnt. \n");
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("Roots are : %.2f and %.2f \n",x1,x2);
     } else if (D==0) {
        printf("Roots are real and same. \n");
        x1=x2=-b/(2*a);
        printf("Roots are : %.2f and %.2f \n",x1,x2);
     } else {
        printf("Roots are complex and imaginary. \n");
        rpart=-b/(2*a);
        imgpart=sqrt(-D)/(2*a);
        printf("Roots are : %.2f + %.2fi and %.2f - %.2fi \n",rpart,imgpart,rpart,imgpart);
     }
    
}