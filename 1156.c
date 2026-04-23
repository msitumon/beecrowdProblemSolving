#include<stdio.h>
int main(){
    //S sequence II.
    int i;
    long int a=1;
    long double sum=0;
    for(i=1; i<=39; i+=2){
        sum+=(float)i/a;
        a*=2;
    }
    printf("%.2Lf\n",sum);
return 0;
}