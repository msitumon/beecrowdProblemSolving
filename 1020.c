#include<stdio.h>
int main(){
    //Age in days.
    int N,hours,minutes,seconds;
    scanf("%d",&N);
    hours=N/3600;
    N=N%3600;
    minutes=N/60;
    N=N%60;
    seconds=N;
    printf("%d:%d:%d\n",hours,minutes,seconds);
}