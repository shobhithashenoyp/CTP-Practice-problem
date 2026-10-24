#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\nEnter the initial views : ");
    float v0;
    scanf("%f", &v0);

    printf("\nEnter the time : ");
    float t;
    scanf("%f", &t);

    printf("\nEnter the growth rate: ");
    float k;
    scanf("%f", &k);

    printf("\nEnter the carrying capacity: ");
    float m;
    scanf("%f", &m);

    printf("\nEnter the step length: ");
    float h;
    scanf("%f", &h);

    printf("\nHow many iterations you want to perform : ");
    int n;
    scanf("%d", &n);

    // First derivative
    float vt0 = k * v0 * (1 - v0/m);
    float vv0 = v0 + h * vt0;
    printf("\nIteration 1: %f", vv0);

    // Iterations using improved Euler (Heun’s method)
    for (int i = 1; i < n; i++) {
        float vt1 = k * vv0 * (1 - vv0/m);
        vv0 = v0 + (h/2) * (vt0 + vt1);

        printf("\nIteration %d: %f", i+1, vv0);

        // Update values for next step
        v0 = vv0;
        vt0 = vt1;
    }

    return 0;
}