#include<stdio.h>
int main(){
    //Lab experiment report.
    int n,amount,i,x=0,y=0,z=0;
    char type;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d %c",&amount,&type);
        if(type=='C'){
            x+=amount;
        }
        else if(type=='R'){
            y+=amount;
        }
        else if(type=='S'){
            z+=amount;
        }
    }
    amount=x+y+z;
    float xp,yp,zp;
    xp=x*100.0/(x+y+z);
    yp=y*100.0/(x+y+z);
    zp=z*100.0/(x+y+z);
    printf("Total: %d cobaias\n",amount);
    printf("Total de coelhos: %d\n",x);
    printf("Total de ratos: %d\n",y);
    printf("Total de sapos: %d\n",z);
    printf("Percentual de coelhos: %.2f %%\n",xp);
    printf("Percentual de ratos: %.2f %%\n",yp);
    printf("Percentual de sapos: %.2f %%\n",zp);
return 0;
}