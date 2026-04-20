#include<stdio.h>
int main(){
    //Type of fuel.
    int a,alcohol=0,gasoline=0,diesel=0;
    for( ; ; ){
        scanf("%d",&a);
        if(a==1){
            alcohol+=1;
        }
        else if(a==2){
            gasoline+=1;
        }
        else if(a==3){
            diesel+=1;
        }
        else if(a==4){
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcohol);
    printf("Gasolina: %d\n",gasoline);
    printf("Diesel: %d\n",diesel);
return 0;
}