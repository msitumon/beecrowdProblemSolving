#include<stdio.h>
int main(){
    //The amount of spent fuel.
int t,s;
float liter;
scanf("%d %d",&t,&s);
liter=(t*s)/12.0;
printf("%.3f\n",liter);
}