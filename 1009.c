#include<stdio.h>
int main(){
    char name[50];
    double a,b;
    scanf("%s %lf %lf",&name,&a,&b);
    double result=a+((b*15)/100);
    printf("TOTAL = R$ %.2lf\n",result);
}