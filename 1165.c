#include<stdio.h>
int main(){
    //Prime number.
    int i,j,n,count;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        count=0;
        for(j=2; j<a[i]; j++){
            if(a[i]%j==0){
                count+=1;
                break;
            }
        }
        if(count==1){
            printf("%d nao eh primo\n",a[i]);
        }
        else{
            printf("%d eh primo\n",a[i]);  
        }
    }
return 0;
}