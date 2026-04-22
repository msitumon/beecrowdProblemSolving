#include<stdio.h>
int main(){
    //Simple factorial.
    int i,n,product=1;
    scanf("%d",&n);
    for(i=n; i>=1; i--){
        product*=i;
    }
    printf("%d\n",product);
return 0;
}