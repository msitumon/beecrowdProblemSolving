#include<stdio.h>
int main(){
int code_1,code_2,unit_1,unit_2;
float price_1,price_2,total_1,total_2,price;
scanf("%d%d%f",&code_1,&unit_1,&price_1);
scanf("%d%d%f",&code_2,&unit_2,&price_2);
total_1=unit_1*price_1;
total_2=unit_2*price_2;
price=total_1+total_2;
printf("VALOR A PAGAR: R$ %.2f\n",price);
}