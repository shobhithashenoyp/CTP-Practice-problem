#include<stdio.h>
#include<stdlib.h>
void main () {
    int n;
    printf("Itiration : ");
    scanf("%f", &n);
    float v , x , y;
    x = 8678.4;
    for (int i = 1; i <= n; i++) {
        v = 1000+(1.6/2)*(4799*x*(1-(x/4800000)));
        x = v;
        printf(" %d : %.4f \n", i , v);


}
}
