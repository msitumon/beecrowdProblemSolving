#include<stdio.h>
int main(){
    //Array change I
    int i,j,a[20];
    for(i=0; i<20; i++){
        scanf("%d",&a[i]);
    }
    for(i=19; i>=0; i--){
        printf("N[%d] = %d\n",19-i,a[i]);
    }
return 0;
}