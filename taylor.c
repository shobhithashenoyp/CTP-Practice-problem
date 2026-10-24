#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846
void main () {
    int degree , i;
    float x, num, den, term, sum = 0;
    printf("\n Enter the degree: ");
    scanf("%d",&degree);
    x = (degree*PI)/180; // Convert degree to radian
    num = x; // First term numerator
    den = 1; // First term denominator
    i = 2;
    do {
        term = num/den;
        sum = sum + term;
        num = -num*x*x; // Update numerator for next term
        den = den*i*(i+1); // Update denominator for next term
        i = i + 2;
    } while(fabs(term) >= 000001);
    printf("\n sin(%d) = %.7f\n taylor series", degree, sum);
    printf("\n sin(%d) = %.7f using library function\n", degree, sin(x));

}
