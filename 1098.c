#include<stdio.h>
int main(){
    //Sequence Ij4
    float i,j=1;
    for(i=0; i<2.0001; i+=0.2){
        for(j=1; j<=3; j++){
            float value=i+j;
            if(i-(int)i<0.0001){
                printf("I=%d J=%d\n",(int)i,(int)value);
            }
            else{
                printf("I=%.1f J=%.1f\n",i,value);
            }
        }
    }
return 0;
}