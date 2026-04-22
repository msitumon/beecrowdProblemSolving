#include<stdio.h>
int main(){
    //S sequence.
    float sum=0;
    int i;
    for(i=1; i<=100; i++){
        float a=(1.0/i);
        sum+=a;
    }
    printf("%.2f\n",sum);
return 0;
}