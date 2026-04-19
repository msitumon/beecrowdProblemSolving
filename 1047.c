#include<stdio.h>
#include<math.h>
int main(){
    //Game time with minutes.
    int h1,m1,h2,m2,x,y,start,end,duration;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    start=(h1*60)+m1;
    end=(h2*60)+m2;
    if (end>start)
        duration=end-start;
    else
        duration=(1440-start)+end;
    x=duration/60;
    y=duration%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
}