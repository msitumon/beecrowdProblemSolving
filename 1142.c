#include<stdio.h>
int main(){
    //PUM
    int n,i,j,a=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            a+=1;
            printf("%d ",a);
        }
        printf("PUM\n");
        a+=1;
    }
return 0;
}