#include<stdio.h>
int main(){
    //Sum of consecutive odd numbers III.
    int i,j,n,x,y,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d %d",&x,&y);
        for(j=x; j<x+2*y; j++){
            if(j%2!=0){
                sum+=j;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
return 0;
}