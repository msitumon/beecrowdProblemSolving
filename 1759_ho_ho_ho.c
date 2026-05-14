#include<stdio.h>
int main(){
    //Game sound(Ho) repetition.
    int i,n,count=0;
    char g[]="Ho";
    //printf("Enter a number of representing how many 'Ho': ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("%s",g);
        if(i<n-1){
            printf(" ");
        }
        else{
            printf("!\n");
        }
    }
return 0;
}