#ifndef ARVORE_H
#define ARVORE_H

// Nó da árvore binária de busca
typedef struct Node {
    int chave;
    struct Node *esq;
    struct Node *dir;
} Node;

Node *criaNo(int chave);
Node *inserir(Node *raiz, int chave);
Node *menorNo(Node *raiz);
Node *remover(Node *raiz, int chave);
void preOrdem(Node *raiz);
void emOrdem(Node *raiz);
void freeNode(Node *raiz);

#endif
