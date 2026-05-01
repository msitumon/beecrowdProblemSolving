#include<stdio.h>
int main(){
    //Sum of the elements above the secundary diagonal.
    int i,j,count=0;
    char o;
    double a[12][12],sum=0,aver;
    //printf("Enter the operation('S' for sum and 'M' for average): ");
    scanf(" %c",&o);
    //printf("Enter array elements: \n");
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=0; i<11; i++){
        for(j=10-i; j>=0; j--){
            sum+=a[i][j];
            count++;
        }
    }
    aver=sum/count;
    //printf("Result: ");
    if(o=='S'){
        printf("%.1lf\n",sum);
    }
    else if(o=='M'){
        printf("%.1lf\n",aver);
    }
return 0;
}