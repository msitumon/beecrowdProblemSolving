#include<stdio.h>
int main(){
    //Logical sequence.
    int a,b,c,x,y,n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        a=i;
        b=i*i;
        c=i*i*i;
        x=b+1;
        y=c+1;
        printf("%d %d %d\n",a,b,c);
        printf("%d %d %d\n",a,x,y);
    }
return 0;
}