#include<stdio.h>

int main (){
    int i, N, T[100];
    int min = T[0];
    printf("Entrer le nombre d'élément du tableau: ");
    scanf("%d", &N);
    for (i=0; i<N; i++){
        printf("Entrer le [%d]element :", i+1);
        scanf("%d",&T[i]);
    }
    for (i=0; i<N; i++){
        printf("T[%d] = %d \n", i, T[i]);
        if(min > T[i]){
            min = T[i];
        }
    }
    printf("le maximum est est:%d\t", min);
    return 0;
}