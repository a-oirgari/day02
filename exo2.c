#include<stdio.h>

int main() {
    int N;
    printf("Entrer le nombre de lignes de pyrammide : ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    
    
    return 0;
}
