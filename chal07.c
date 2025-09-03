#include<stdio.h>

int main (){
    int i, j, N, pr, T[100];
    //int max = T[0];
    printf("Saisir la taille du tableau: ");
    scanf("%d", &N);

    for (i=0; i<N; i++){
        printf("Entrer le [%d]element :", i+1);
        scanf("%d",&T[i]);
    }


    for (i=0; i<N-1; i++){
        for(j=i+1; j<N; j++){
            if(T[i] > T[j]){
                pr = T[i];
                T[i] = T[j];
                T[j] = pr;
            }
        }
    }
    for (i=0; i<N; i++){
        printf("%d\t", T[i]);
    }
    return 0;
}