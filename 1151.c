#include<stdio.h>
int main(){
    //Easy fibonacci series.
    int i,n,sum=0;
    scanf("%d",&n);
    int a=0,b=1;
    for(i=0; i<n; i++){
        if(i==0){
            printf("%d",i);
        }
        else if(i==1){
            printf(" %d",i);
        }
        else{
            int c=a+b;
            printf(" %d",c);
            a=b;
            b=c;
        }
    }
    printf("\n");
return 0;
}