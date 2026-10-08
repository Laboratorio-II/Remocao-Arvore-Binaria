#include <stdio.h>
#include "arvore.h"

int main() {
    Node *raiz = NULL;
    int n, m, x;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        raiz = inserir(raiz, x);
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        raiz = remover(raiz, x);
    }

    if (raiz == NULL) {
        printf("Arvore vazia\n");
    } else {
        printf("Pre-ordem:");
        preOrdem(raiz);
        printf("\nEm ordem:");
        emOrdem(raiz);
        printf("\n");
    }

    freeNode(raiz);
    return 0;
}
