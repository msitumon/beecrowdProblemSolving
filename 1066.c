#include<stdio.h>
int main(){
    //Even, Odd, Positive and Negative
    int a[4],i,e=0,o=0,p=0,n=0;
    for(i=0; i<=4; i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            e+=1;
        }
        if(a[i]%2!=0){
            o+=1;
        }
        if(a[i]>0){
            p+=1;
        }
        if(a[i]<0){
            n+=1;
        }
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
return 0;
}