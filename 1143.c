#include<stdio.h>
#include<math.h>
int main(){
    //Squared and Cubic
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        a=i;
        b=pow(i,2);
        c=pow(i,3);
        printf("%d %d %d\n",a,b,c);
    }
return 0;
}