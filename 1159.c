#include<stdio.h>
int main(){
    //Sum of consecutive even numbers.
    int i,x,sum=0;
    for( ; ; ){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        for(i=x; i<x+10; i++){
            if(i%2==0){
                sum+=i;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
return 0;
}