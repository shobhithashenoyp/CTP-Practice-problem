#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main () {
    printf("\nEnter the initial views : ");
    float v0;
    scanf("%f",&v0);
    printf("\n Enter the time : ");
    float t;
    scanf("%f",&t);
    printf("\n Enter the growth rate: ");
    float k;
    scanf("%f",&k);
    printf("\n Enter the carrying capacity: ");
    float m;
    scanf("%f",&m);
    printf("\n Enter the steplength: ");
    float h;
    scanf("%f",&h);
    printf("\n How many iterations you want to perform : ");
    int n;
    scanf("%d",&n);
    float vt0 = k * v0 *(1-v0/m);
   float vv0 = v0 + h*vt0;
   printf("\n %f",vv0);

    
    for (int i=1;i<n;i++) {
        float vv0 = v0 + (h/2)*(vt0 + k*vv0*(1-vv0/m));
        printf("%f",vv0);
        



       
     
    }
}