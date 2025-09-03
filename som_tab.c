#include<stdio.h>

int main (){
    int i, N, T[100];
    int sum = 0;
    printf("Entrer le nombre d'élément du tableau: ");
    scanf("%d", &N);
    for (i=0; i<N; i++){
        printf("Entrer le [%d]element :", i+1);
        scanf("%d",&T[i]);
    }
    for (i=0; i<N; i++){
        printf("T[%d] = %d \n", i, T[i]);
        sum+=T[i];
    }
    printf("la somme totale est:%d\t", sum);
    return 0;
}
//Challenge 3 : Somme des Éléments
//Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers. Le programme doit demander le nombre d'éléments, puis les éléments du tableau, et afficher la somme totale.