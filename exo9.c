#include<stdio.h>

int main() {
    int n, m; 
    int r = 1;
    printf("Entrer la base : ");
    scanf("%d", &n);
    printf("Entrer l'exposant : ");
    scanf("%d", &m);

    if (m < 0) {
        printf("L'exposant doit etre un entier positif");
        return 1;
    }
    for (int i = 0; i < m; i++) {
        r = r * n;
    }
        
    printf("Le resultat est : %d", r);
    return 0;
}
