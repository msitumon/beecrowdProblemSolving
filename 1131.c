#include<stdio.h>
int main(){
    //Multiple matches score.
    int x,y,m,n=0,total=0,inter=0,gremio=0,draws=0;
    for( ; ; ){
        n+=1;
        scanf("%d %d",&x,&y);
        if(x==y){
            draws+=1;
        }
        else if(x>y){
            inter+=1;
        }
        else{
            gremio+=1;
        }
        for( ; ; ){
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&m);
            if(m==1 || m==2){
                break;
            }
        }
        if(m==2){
            break;
        }
    }
    printf("%d grenais\n",n);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",draws);
    if(inter==gremio){
        printf("Naohouve vencedor\n");
    }
    else if(inter>gremio){
        printf("Inter venceu mais\n");
    }
    else{
        printf("Gremio venceu mais\n");
    }
return 0;
}