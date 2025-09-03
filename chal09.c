#include<stdio.h>
#include<string.h>

int main (){
    char T[100];
    int l, i;
    printf("donner la valeur du tab: ");
    scanf("%s", T);
    l = strlen(T);
    for (i = l-1; i >= 0; i--){
        printf("%c", T[i]);
    }
    //printf("l'inverse est", T);
    return 0;
}