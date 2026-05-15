#include<stdio.h>
int main(){
    //The race of slugs.
    int i,j,n,max;
    while(scanf("%d",&n) !=EOF){
        int a[n];
        for(i=0; i<n; i++){
            scanf("%d",&a[i]);
            if(i==0){
                max=a[0];
            }
            if(max<a[i]){
                max=a[i];
            }
        }
        if(max<10){
            printf("%d\n",1);
        }
        else if(max>=10 && max<20){
            printf("%d\n",2);
        }
        else if(max>=20){
            printf("%d\n",3);
        }
    }
return 0;
}