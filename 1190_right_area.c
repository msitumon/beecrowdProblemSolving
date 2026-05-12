#include<stdio.h>
int main(){
    //Sum or average of the elements of right area.
    int i,j,count=0;
    float a[12][12],sum=0;
    char o;
    //printf("Enter the operation: ");
    scanf(" %c",&o);
    //printf("Enter the elements:\n");
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&a[i][j]);
            if(j>11-i && j>i){
                sum+=a[i][j];
                count++;
            }
        }
    }
    //printf("Result: ");
    if(o=='S'){
        printf("%.1f\n",sum);
    }
    else if(o=='M'){
        printf("%.1f\n",sum/count);
    }
return 0;
}