#include <stdio.h>
int main() {
    //Lowest number and position.
    int n, x, min, pos = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        if(i == 0 || x < min) {
            min = x;
            pos = i;
        }
    }
    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", pos);
return 0;
}