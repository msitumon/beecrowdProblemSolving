#include<stdio.h>
int main(){
    //Weighted averages.
    int i,n;
    scanf("%d",&n);
    float a[n][3],b[n];
    for(i=0; i<n; i++){
        scanf("%f %f %f",&a[i][0],&a[i][1],&a[i][2]);
        b[i] = a[i][0]*2 + a[i][1]*3 + a[i][2]*5;
    }
    for(i=0; i<n; i++){
        printf("%.1f\n",b[i]/10);
    }
return 0;
}