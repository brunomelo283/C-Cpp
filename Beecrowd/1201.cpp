#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct tree
{
    int info;
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

void insere(Tree **t, int info)
{
    Tree *pai, *aux;

    if (*t == NULL)
        *t = CriaNo(info);
    else
    {
        aux = *t;
        while (aux != NULL)
        {
            pai = aux;
            if (info < aux->info)
                aux = aux->esq;
            else
                aux = aux->dir;
        }

        if (info < pai->info)
            pai->esq = CriaNo(info);
        else
            pai->dir = CriaNo(info);
    }
}

void search(Tree *t, int info, char *flag)
{
    if (t != NULL)
    {
        if (t->info == info)
            *flag = 1;
        search(t->esq, info, &(*flag));
        search(t->dir, info, &(*flag));
    }
}

void pre_ordem(Tree *t, int *f)
{

    if (t != NULL)
    {
        if (*f == 0)
            printf("%d", t->info);
        else
            printf(" %d", t->info);
        (*f)++;
        pre_ordem(t->esq, &(*f));
        pre_ordem(t->dir, &(*f));
    }
}
void in_ordem(Tree *t, int *f)
{

    if (t != NULL)
    {

        in_ordem(t->esq, &(*f));
        if (*f == 0)
            printf("%d", t->info);
        else
            printf(" %d", t->info);
        (*f)++;
        in_ordem(t->dir, &(*f));
    }
}
void pos_ordem(Tree *t, int *f)
{

    if (t != NULL)
    {
        pos_ordem(t->esq, &(*f));
        pos_ordem(t->dir, &(*f));
        if (*f == 0)
            printf("%d", t->info);
        else
            printf(" %d", t->info);
        (*f)++;
    }
}
void busca(Tree *t, Tree *ant, int info, Tree **e, Tree **pai)
{
    if (t != NULL)
    {

        if (t->info == info)
        {
            *pai = ant;
            *e = t;
        }

        else
        {
            if (info > t->info)
                busca(t->dir, t, info, &*e, &*pai);
            else
                busca(t->esq, t, info, &*e, &*pai);
        }
    }
}

Tree *exclusao(Tree *t, int info)
{
    if (!t)
        return NULL;
    Tree *aux;
    Tree *ant;
    if (t->info == info)
    {
        if (!t->esq && !t->dir)
        {
            free(t);
            return NULL;
        }
        else
        {
            if (t->esq && !t->dir)
            {
                aux = t->esq;
                free(t);
                t = NULL;
                return aux;
            }
            else
            {
                if (t->dir && !t->esq)
                {
                    aux = t->dir;
                    free(t);
                    t = NULL;
                    return aux;
                }
                else
                {
                    aux = t->esq;
                    ant = NULL;
                    while (aux->dir)
                    {
                        ant = aux;
                        aux = aux->dir;
                    }

                    if (ant)
                        ant->dir = aux->esq;

                    aux->dir = t->dir;
                    if (aux == t->esq)
                        aux->esq = t->esq->esq;
                    else
                        aux->esq = t->esq;

                    free(t);
                    t = NULL;
                    return aux;
                }
            }
        }
    }
    else if (t->info > info)
        t->esq = exclusao(t->esq, info);
    else
        t->dir = exclusao(t->dir, info);
    return t;
}

int main(void)
{
    int i = 0, n;
    char S1[1000], flag = 0;
    Tree *t = NULL, *e, *pai;

    while (scanf("%s", &S1) != EOF)
    {
        if (strcmp(S1, "I") == 0)
        {
            scanf(" %d", &n);
            insere(&t, n);
        }
        else if (strcmp(S1, "INFIXA") == 0)
        {
            i = 0;
            in_ordem(t, &i);
            printf("\n");
        }
        else if (strcmp(S1, "PREFIXA") == 0)
        {
            i = 0;
            pre_ordem(t, &i);
            printf("\n");
        }
        else if (strcmp(S1, "POSFIXA") == 0)
        {
            i = 0;
            pos_ordem(t, &i);
            printf("\n");
        }
        else if (strcmp(S1, "R") == 0)
        {
            scanf(" %d", &n);
            t = exclusao(t, n);
        }
        else
        {
            flag = 0;
            scanf(" %d", &n);
            search(t, n, &flag);
            if (flag)
                printf("%d existe\n", n);
            else
                printf("%d nao existe\n", n);
        }
    }
    return 0;
}