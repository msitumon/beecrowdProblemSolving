#include<stdio.h>
int main(){
    //Sort by ascending and descending.
    int x,y;
    for( ; ; ){
        scanf("%d %d",&x,&y);
        if(x==y){
            break;
        }
        else if(x<y){
            printf("Crescente\n");
        }
        else{
            printf("Decrescente\n");
        }
    }
return 0;
}