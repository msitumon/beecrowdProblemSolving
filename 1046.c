#include<stdio.h>
#include<math.h>
int main(){
    //Game time.
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=(24-a)+b;
    if (x<=24){
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }
    else {
        x=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }
}