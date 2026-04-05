#include<stdio.h>
int main(){
    //Score validation.
    float a=0,n,sum=0;
    for( ; ; ){
        scanf("%f",&n);
        if(n>=0.0 && n<=10.0){
            sum+=n;
            a++;
        }
        else{
            printf("nota invalida\n");
        }
        if(a==2){
            break;
        }
    }
    printf("media = %.2f\n",sum/2);
return 0;
}