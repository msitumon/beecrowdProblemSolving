#include<stdio.h>
#include<stdlib.h>
int main(){
    //Euclidean division theorem or division algorithm.
    int a,b,q,r;
    printf("Enter two integer numbers: ");
    scanf("%d %d",&a,&b);
    q=a/b;
    r=a%b;
    if(r<0){
        r+=abs(b);
        if(b>0){
            q--;
        }
        else{
            q++;
        }
    }
    printf("%d %d\n",q,r);
return 0;
}