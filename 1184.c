#include <stdio.h>
int main() {
    //Bilow the main diagonal.
    char T;
    double M[12][12], sum = 0;
    int count = 0;
    scanf(" %c", &T);
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < i; j++) { // i > j
            sum += M[i][j];
            count++;
        }
    }
    if(T == 'S') {
        printf("%.1lf\n", sum);
    } else {
        printf("%.1lf\n", sum / count);
    }
return 0;
}