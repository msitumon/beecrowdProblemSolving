#include<stdio.h>
int main(){
    //Array fill I.
    int i,x,N[10];
    scanf("%d",&x);
    for(i=0; i<10; i++){
        printf("N[%d] = %d\n",i,x);
        x=2*x;
    }
return 0;
}