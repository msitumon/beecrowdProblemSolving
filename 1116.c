#include<stdio.h>
int main(){
    //Result of dividing X by Y
    int i,n,x,y;
    float a;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d %d",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
            a=(x*1.0)/y;
            printf("%.1f\n",a);
        }
    }
return 0;
}