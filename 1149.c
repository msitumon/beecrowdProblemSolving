#include<stdio.h>
int main(){
    //Summing consecutive integers.
    int a,i,n,sum=0;
    scanf("%d %d",&a,&n);
    for( ; ; ){
        if(n<=0){
            scanf("%d",&n);
        }
        else{
            break;
        }
    }
    for(i=a; i<a+n; i++){
        sum+=i;
    }
    printf("%d\n",sum);
return 0;
}