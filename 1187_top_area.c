#include<stdio.h>
int main(){
    //Sum of the elements of top area.
    int i,j,count=0;
    double m[12][12],sum=0,aver;
    char O;
    //printf("Enter the operation('S' for sum and 'M' for average): ");
    scanf(" %c",&O);
    //printf("Enter array elements: \n");
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf",&m[i][j]);
        }
    }
    for(i=0; i<10-i; i++){
        for(j=i+1; j<11-i; j++){
            sum+=m[i][j];
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