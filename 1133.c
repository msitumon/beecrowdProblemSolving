#include<stdio.h>
int main(){
    //Rest of a Division
    int x,y,i,start,end;
    scanf("%d %d",&x,&y);
    start=x<y?x:y;
    end=x>y?x:y;
    for(i=start+1; i<end; i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }
return 0;
}