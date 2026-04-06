#include<stdio.h>
int main(){
    //Sequence IJ1
    int i=1,j,n;
    for(j=60; j>=0; j-=5){
        printf("I=%d J=%d\n",i,j);
        i+=3;
    }
return 0;
}