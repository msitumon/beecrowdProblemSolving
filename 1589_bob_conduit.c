#include<stdio.h>
int main(){
    //The smallest radius of a conduit to buy.
    int a,b,i,n,s;
    printf("Enter the number of test cases: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter two redius: ");
        scanf("%d %d",&a,&b);
        if(a>=0 && b>=0){
            s=a+b;
            printf("%d\n",s);
        }
    }
return 0;
}