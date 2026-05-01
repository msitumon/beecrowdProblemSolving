#include<stdio.h>
int main(){
    //Sum of the elements of a specific column in array.
    int i,j,n;
    float sum=0,aver,a[12][12];
    //printf("Enter column number: ");
    scanf("%d",&n);
    char x;
    //printf("Enter considered operation('S' for sum and 'M' for average): ");
    scanf(" %c",&x);
    //printf("Enter array elements: \n");
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0; i<12; i++){
        sum=sum+a[i][n];
    }
    aver=sum/12;
    if(x=='S'){
        printf("%.1f\n",sum);
    }
    else if(x=='M'){
        printf("%.1f\n",aver);
    }
return 0;
}