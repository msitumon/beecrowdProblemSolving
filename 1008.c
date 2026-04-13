#include<stdio.h>
int main(){
    int a,b;
    double c;
    scanf("%d %d %lf",&a,&b,&c);
    double result=(double)b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2lf\n",result);
}