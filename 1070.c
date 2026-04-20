#include<stdio.h>
int main(){
    //Six odd numbers.
    int x,a,i;
    scanf("%d",&x);
    for(i=x; i<=x+11; i++){
        a=i%2;
        if(a==1){
            printf("%d\n",i);
        }
    }
}