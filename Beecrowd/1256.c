#include<stdio.h>

int hash(int codigo, int N)
{
	return codigo % N;
}




struct listahash
{
	int elem;
	struct listahash *prox;
}; 
typedef struct listahash ListaHash;

struct lista
{
	ListaHash *end;
	int cod;
	struct lista *prox;
}; 
typedef struct lista Lista;


ListaHash *CriaNo(int n)
{
	ListaHash *no = (ListaHash*)malloc(sizeof(ListaHash));
	no->elem = n;
	no->prox = NULL;
	return no;
}

void insere(ListaHash **l, int n)
{
	ListaHash *aux, *nova;
	if(*l == NULL)
		*l = CriaNo(n);
	else
	{
		aux = *l;
		nova = CriaNo(n);
		while(aux->prox != NULL)
			aux = aux->prox;
		aux->prox = nova;
	}
}

void inicialize(Lista **l, int n)
{
	int i;
	Lista *nova, *aux;
	 for(i=0; i < n; i++)
	 {
	 	 
		 nova = (Lista*)malloc(sizeof(Lista));
		 nova->end = NULL;
		 nova->cod = i;
		 nova->prox = NULL;
		 
	 	if(*l == NULL)
	 		*l = nova;
	 	else
	 	{
 			aux = *l;
			while(aux->prox != NULL)		
				aux = aux->prox;			
			aux->prox = nova;		
		}
	 }
}



Lista *busca_exaustiva(Lista *l, int pos)
{
	Lista *aux;
	aux = l;
	while(aux != NULL && aux->cod != pos)
		aux = aux->prox;
	return aux;
}





void exibe_all(Lista *l)
{
	Lista *aux;	
	ListaHash *auxh;
	aux = l;
	
	while(aux != NULL)
	{
		printf("%d ", aux->cod);
		if(aux->end != NULL)		
		{
			auxh = aux->end;
			while(auxh != NULL)
			{
				printf("-> %d ", auxh->elem);
				auxh = auxh->prox;
			}
		}
	
		printf("-> ");
		aux = aux->prox;
		printf("\\");
		printf("\n");
	}

}


void deletarTodosR(Lista **lista)
{
	Lista *aux, *ant;
	ListaHash *auxh, *anth;
	while(*lista != NULL)
	{
		ant = aux = *lista;
		while(aux->prox != NULL)
		{
			ant = aux;
			aux = aux->prox;	
		}
		if(aux->end != NULL)
		{
			anth = auxh = aux->end;
			while(auxh->prox != NULL)
			{
				anth = auxh;
				auxh = auxh->prox;
			}
			
			if(anth = aux->end)
				aux->end = NULL;
			else
				anth->prox = NULL;
			free(auxh);
		}
		if(ant == *lista)
			*lista = NULL;
		else
			ant->prox = NULL;	
		free(aux);
		
	}
	
}
int main(void)
{
	int N, t, c, elem, pos;
	Lista *l = NULL, *aux;
	scanf("%d", &t);
	while(t > 0)
	{
		scanf("%d %d", &N, &c);
		inicialize(&l, N);
		while(c>0)
		{
			scanf("%d", &elem);	
				pos = hash(elem, N);
				aux = busca_exaustiva(l, pos);
				insere(&aux->end, elem);
			c--;
		}
		if(l != NULL)
			exibe_all(l);
		if(t-1 != 0)
			printf("\n");
		deletarTodosR(&l);
		t--;
	}
	return 0;
}
