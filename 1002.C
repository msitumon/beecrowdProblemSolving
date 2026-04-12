#include<stdio.h>
int main(){
    double a;
    scanf("%lf", &a);
    double r = (3.14159)*(a*a);
    printf("A=%.4lf\n", r);
    return 0;
}