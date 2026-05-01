#include<stdio.h>
int main(){
    //Sum of the elements below the secunadary diagonal.
    int i,j,count=0;
    float a[12][12],sum=0,aver;
    char o;
    //printf("Enter the operation('S' for sum and 'M' for average): ");
    scanf(" %c",&o);
    //printf("Enter array elements: \n");
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&a[i][j]);
        }
    }
    for(i=1; i<12; i++){
        for(j=12-i; j<12; j++){
            sum+=a[i][j];
            count++;
        }
    }
    aver=sum/count;
    //printf("Result: ");
    if(o=='S'){
        printf("%.1f\n",sum);
    }
    else if(o=='M'){
        printf("%.1f\n",aver);
    }
return 0;
}