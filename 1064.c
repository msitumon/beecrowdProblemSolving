#include<stdio.h>
int main(){
    float a[5],sum=0,average;
    int i,n=0;
    for(i=0; i<=5; i++){
        scanf("%f",&a[i]);
        if(a[i]>0){
            n+=1;
            sum+=a[i];
        }
    }
    average=sum/n;
    printf("%d valores positivos\n",n);
    printf("%.1f\n",average);
return 0;
}