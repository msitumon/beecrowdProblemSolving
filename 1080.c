#include<stdio.h>
int main(){
    //Detecte highest number and position.
    int a[100],i,c;
    for(i=0; i<100; i++){
        scanf("%d",&a[i]);
    }
    int b = a[0];
    for(i=0; i<100; i++){
        if(a[i]>=b){
            b = a[i];
            c = i + 1;
        }
    }
    printf("%d\n",b);
    printf("%d\n",c);
return 0;
}