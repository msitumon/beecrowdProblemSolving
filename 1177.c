#include <stdio.h>
int main() {
    //Array fill II.
    int N[1000], x;
    scanf("%d", &x);
    for(int i = 0; i < 1000; i++) {
        N[i] = i % x;
        printf("N[%d] = %d\n", i, N[i]);
    }
return 0;
}