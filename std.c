#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main () {
    int i,n;
    float mean, std,sum=0;
    float *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (float*) malloc(n * sizeof(float));
    printf("Enter %d elements: \n", n);
    for(i=0;i<n;i++) {
        scanf("%f", &ptr[i]);
        sum += ptr[i];
    }
    printf("\n Sum = %.2f", sum);
    mean = sum/n;
    printf("\n Mean = %.2f", mean);
    sum = 0;
    for(i=0;i<n;i++) {
       ptr[i] = mean - ptr[i];
         ptr[i] = ptr[i] * ptr[i];
            sum += ptr[i];
    }
    sum = sum/n;
    std = sqrt(sum);
    printf("\n Standard Deviation = %.2f", std);
    

}
