#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <iostream>
#include<string.h>

using namespace std;

map<char, int> m;

struct tree
{
    char info;
    struct tree *esq, *dir;
};
typedef struct tree Tree;

Tree *CriaNo(int info)
{
    Tree *nodo = (Tree *)malloc(sizeof(Tree));
    nodo->info = info;
    nodo->esq = nodo->dir = NULL;
    return nodo;
}
void excluirPosOrdem(Tree **t)
{

    if (*t != NULL)
    {
        excluirPosOrdem(&(*t)->esq);
        excluirPosOrdem(&(*t)->dir);
        free(*t);
        *t = NULL;
    }
}

void insere(Tree **t, char info)
{
    Tree *pai, *aux;

    if (*t == NULL)
        *t = CriaNo(info);

    else
    {
        if (m[(*t)->info] < m[info])
            insere(&(*t)->dir, info);
        else
            insere(&(*t)->esq, info);
    }
}

void pos_ordem(Tree *t)
{
    if (t != NULL)
    {
        pos_ordem(t->esq);
        pos_ordem(t->dir);
        printf("%c", t->info);
    }
}

int main(void)
{
    int c, info, qtd;
    char s1[1000], s2[1000];
    Tree *t = NULL;

    while (scanf("%s %s", s1, s2) != EOF)
    {
        qtd = strlen(s1);

      
        for (int j = 0; j < qtd; j++)
        {
            m[s2[j]] = j;
        }
        for (int j = 0; j < qtd; j++)
        {
            insere(&t, s1[j]);
        }
        pos_ordem(t);
        printf("\n");

        excluirPosOrdem(&t);

       

    }
    return 0;
}