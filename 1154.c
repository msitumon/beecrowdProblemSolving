#include<stdio.h>
int main(){
    //Average age of the group.
    int age,sum=0,count=0;
    float average;
    for( ; ; ){
        scanf("%d",&age);
        if(age<0){
            break;
        }
        else{
            count+=1;
            sum+=age;
        }
    }
    average=(float)sum/count;
    printf("%.2f\n",average);
return 0;
}