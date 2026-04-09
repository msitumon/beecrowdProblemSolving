#include<stdio.h>
int main(){
    //Growing sequences
    int i,j,x;
    for( ; ; ){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        for(j=1; j<=x; j++){
            if(j==x){
                printf("%d",j);
            }
            else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }
return 0;
}