#include<stdio.h>
int main(){
    //Remaining 2.
    int a,i,n;
    scanf("%d",&n);
    for(i=0; i<=10000/n; i++){
        a = n*i + 2;
        if(a<=10000){
            printf("%d\n",a);
        }
    }
return 0;
}