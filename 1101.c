#include<stdio.h>
int main(){
    //Sequence of numbers and sum.
    int i,m,n;
    for( ; ;){
        scanf("%d %d",&m,&n);
        if(m<=0 || n<=0){
            break;
        }
        int sum=0;
        int start=m<n?m:n;
        int end=m>n?m:n;
        for(i=start; i<=end; i++){
            sum+=i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",sum);
    }
return 0;
}