#include <stdio.h>
int main() {
    //Array fill III.
    double N[100];
    double x;
    scanf("%lf", &x);
    for(int i = 0; i < 100; i++) {
        N[i] = x;
        printf("N[%d] = %.4lf\n", i, N[i]);
        x /= 2.0;
    }
return 0;
}