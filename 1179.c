#include <stdio.h>
int main() {
    //Array fill IV.
    int num, even[5], odd[5];
    int e = 0, o = 0;
    for(int i = 0; i < 15; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            even[e++] = num;
            if(e == 5) {
                for(int j = 0; j < 5; j++)
                    printf("par[%d] = %d\n", j, even[j]);
                e = 0;
            }
        } else {
            odd[o++] = num;
            if(o == 5) {
                for(int j = 0; j < 5; j++)
                    printf("impar[%d] = %d\n", j, odd[j]);
                o = 0;
            }
        }
    }
    for(int j = 0; j < o; j++)
        printf("impar[%d] = %d\n", j, odd[j]);

    for(int j = 0; j < e; j++)
        printf("par[%d] = %d\n", j, even[j]);

return 0;
}