#include<stdio.h>
int main(){
    //Several scores with validation.
    double a,sum=0,average;
    int x,count=0;
    for( ; ; ){
        scanf("%lf",&a);
        if(a>=0 && a<=10){
            count++;
            sum+=a;
        }
        else{
            printf("nota invalida\n");
        }
        if(count==2){
            average=sum/2;
            printf("media = %.2lf\n",average);
            count=0;
            sum=0;
            for( ; ; ){
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&x);
                if(x==1 || x==2){
                    break;
                }
            }
        }
        if(x==2){
            break;
        }
    }
return 0;
}