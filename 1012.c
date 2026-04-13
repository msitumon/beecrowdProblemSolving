#include<stdio.h>
#include<math.h>
int main(){
double a,b,c,triangle,circle,trapezium,square,rectangle,pi=3.14159;
scanf("%lf %lf %lf",&a,&b,&c);
triangle=(1.0/2)*a*c;
circle=pi*pow(c,2);
trapezium=(1.0/2)*(a+b)*c;
square=pow(b,2);
rectangle=a*b;
printf("TRIANGULO: %.3lf\n",triangle);
printf("CIRCULO: %.3lf\n",circle);
printf("TRAPEZIO: %.3lf\n",trapezium);
printf("QUADRADO: %.3lf\n",square);
printf("RETANGULO: %.3lf\n",rectangle);
}