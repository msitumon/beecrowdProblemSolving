#include<stdio.h>
int main(){
    //How many numbers are in the interval.
    int n;
    scanf("%d",&n);
    int i,a=0,b=0,x[n];
    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
        if(x[i]>=10 && x[i]<=20){
            a+=1;
        }
        else{
            b+=1;
        }
    }
    printf("%d in\n",a);
    printf("%d out\n",b);
return 0;
}