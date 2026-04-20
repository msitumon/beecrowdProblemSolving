#include<stdio.h>
int main(){
    //Odd numbers.
    int x,i;
    scanf("%d",&x);
    for(i=0; i<=x; i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}