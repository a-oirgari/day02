#include<stdio.h>

int times(int a, int b);
int main() {
    int N, M;
    printf("Entrer le facteur : ");
    scanf("%d", &M);
    printf("Entrer le nombre à multiplier : ");
    scanf("%d", &N);

    for (int i = N; i > 0; i--) {
        
        printf("%d * %d = %d\n", M, i, times(i, M));
    }
    return 0;
}
int times(int a, int b) {
    return a * b;
}