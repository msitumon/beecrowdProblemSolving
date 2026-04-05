#include<stdio.h>
int main(){
    //sum of consecutive odd numbers II.
    int i,j,n,x,y;
    scanf("%d",&n);
    int sum[n],s;
    for(i=0; i<n; i++){
        scanf("%d %d",&x,&y);
        s = 0;
        int start = x < y ? x:y;
        int end = x > y ? x:y;
        for(j=start+1; j<end; j++){
            if(j%2!=0){
                s += j;
            }
        }
        sum[i] = s;
    }
    for(i=0; i<n; i++){
        printf("%d\n",sum[i]);
    }
return 0;
}