#include<stdio.h>
int main(){
    float a,tax;
    scanf("%f",&a);
    if(a<=2000.00){
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000.00){
        tax=(a-2000.00)*8/100.00;
        printf("R$ %.2f\n",tax);
    }
    else if(a>=3000.01 && a<=4500.00){
        tax=80+((a-3000.00)*18.0/100.00);
        printf("R$ %.2f\n",tax);
    }
    else{
        tax=270+80+((a-4500.0)*28.0/100.0);
        printf("R$ %.2f\n",tax);
    }
return 0;
}