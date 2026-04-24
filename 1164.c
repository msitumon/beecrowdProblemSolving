#include<stdio.h>
int main(){
    //Perfect number.
    int i,n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum=0;
        for(int j=1; j<=a[i]/2; j++){
            if(a[i]%j==0){
                sum+=j;
            }
        }
        if(sum==a[i]){
            printf("%d eh perfeito\n",a[i]);
        }
        else{
            printf("%d nao eh perfeito\n",a[i]);
        }
    }
return 0;
}