#include<stdio.h>
int main(){
    //Sum of the elements above the main diagonal.
    int i,j,count=0; 
    double sum=0.0,aver,arr[12][12];
    char o;
    //printf("Enter the operation('S' for sum and 'M' for average): ");
    scanf(" %c",&o);
    //printf("Enter array elements: \n");
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf",&arr[i][j]);
        }
    }
    for(i=0; i<12; i++){
        for(j=i+1; j<12; j++){
            sum+=arr[i][j];
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