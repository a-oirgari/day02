#include<stdio.h>

int main() {
    int M;
    printf("Entrer un nombre ayant deux chiffres : ");
    scanf("%d", &M);

    int chiffre1 = M / 10;  
    int chiffre2 = M % 10;  
    printf("L'inverse est : %d%d\n", chiffre2, chiffre1);
    
    return 0;
}
