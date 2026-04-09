#include<stdio.h>
int main(){
    //Multiples of 13
    int x,y,i,sum=0;
    scanf("%d %d",&x,&y);
    int start=x<y?x:y;
    int end=x>y?x:y;
    for(i=start; i<=end; i++){
        if(i%13!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);
return 0;
}