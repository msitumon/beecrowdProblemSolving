#include<stdio.h>
int main(){
    //Exceeding Z
    int x,y;
    scanf("%d %d",&x,&y);
    for( ; ; ){
        if(y<=0 || y<=x){
            scanf("%d",&y);
        }
        else{
            break;
        }
    }
    int i=x,sum=0,count=0;
    do{
        sum+=i;
        count+=1;
        i++;
    }
    while(sum<+y);
    printf("%d\n",count);
return 0;
}