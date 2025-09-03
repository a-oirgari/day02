#include<stdio.h>

int main (){
    int i, N, T[100];
    printf("Entrer le nombre d'élément du tableau: ");
    scanf("%d", &N);
    for (i=0; i<N; i++){
        printf("Entrer le [%d]element :", i+1);
        scanf("%d",&T[i]);
    }
    for (i=0; i<N; i++){
        printf("T[%d] = %d :\n", i, T[i]);
    }
    return 0;
}