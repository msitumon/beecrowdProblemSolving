#include<stdio.h>
int main(){
    float a[5];
    int i,n=0;
    for(i=0; i<=5; i++){
        scanf("%f",&a[i]);
        if(a[i]>0){
            n+=1;
        }
    }
    printf("%d valores positivos\n",n);
return 0;
}