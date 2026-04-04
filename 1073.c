#include<stdio.h>
#include<math.h>
int main(){
    //Print the square of each one of the even values.
    int a,i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(i%2==0){
            a = pow(i,2);
            printf("%d^2 = %d\n",i,a);
        }
    }
return 0;
}