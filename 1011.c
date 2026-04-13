#include<stdio.h>
#include<math.h>
int main(){
double r,volume,Pi=3.14159;
scanf("%lf",&r);
volume=(4/3.0)*Pi*pow(r,3);
printf("VOLUME = %.3lf\n",volume);
}