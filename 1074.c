#include<stdio.h>
int main(){
    //Even or Odd and Negative or Positive.
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]==0){
            printf("NULL\n");
        }
        else if(a[i]%2==0){
            if(a[i]<0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("EVEN POSITIVE\n");
            }
        }
        else{
            if(a[i]<0){
                printf("ODD NEGATIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }
    }
return 0;
}