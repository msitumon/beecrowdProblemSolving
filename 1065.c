#include<stdio.h>
int main(){
    //Even between five numbers
    int a[4],i,n=0;
    for(i=0; i<=4; i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            n+=1;
        }
    }
    printf("%d valores pares\n",n);
return 0;
}