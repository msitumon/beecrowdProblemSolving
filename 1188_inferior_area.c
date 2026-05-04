#include<stdio.h>
int main(){
    //Sum or average of the elements of inferior area.
    int i,j,count;
    double a[12][12],sum=0,aver;
    char O;
    //printf("Enter the operation: ");
    scanf(" %c",&O);
    //printf("Enter array elements value: \n");
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=7; i<12; i++){
        for(j=12-i; j<i; j++){
            sum+=a[i][j];
            count++;
        }
    }
    aver=sum/count;
    //printf("Result: ");
    if(O=='S'){
        printf("%.1lf\n",sum);
    }
    else if(O=='M'){
        printf("%.1lf\n",aver);
    }
return 0;
}