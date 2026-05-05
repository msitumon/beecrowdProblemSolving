#include<stdio.h>
int main(){
    //Sum or average of the elements of left area.
    int i,j,count=0,m=0;
    double a[12][12],sum=0,aver;
    char O;
    //printf("Enter the operation: ");
    scanf(" %c",&O);
    //printf("Enter the elements: \n");
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=1; i<11; i++){
        if(i>=6){
            if(m==1){
                m=1;
            }
            else{
                m+=2;
            }
        }
        for(j=0; j<i-m; j++){
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