#include<stdio.h>
int main(){
    \\The value of snack to pay.
    int x,y;
    float price;
    scanf("%d %d",&x,&y);
    if (x==1){
        price=4*y;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==2){
        price=4.50*y;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==3){
        price=5.00*y;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==4){
        price=2.00*y;
        printf("Total: R$ %.2f\n",price);
    }
    else if (x==5){
        price=1.50*y;
        printf("Total: R$ %.2f\n",price);
    }
}