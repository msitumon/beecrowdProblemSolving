#include<stdio.h>
int main(){
    //Our days are never coming back.
    int i,n;
    char a[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    //printf("Enter the position number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("%c",a[i]);
    }
    printf("\n");
return 0;
}