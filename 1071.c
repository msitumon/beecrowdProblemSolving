#include<stdio.h>
int main(){
    int x,y,i,sum=0;
    scanf("%d %d",&x,&y);
    int start,end;
    start = x < y ? x : y;
    end = x > y ? x : y;
    for(i=start+1; i<end; i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);
}