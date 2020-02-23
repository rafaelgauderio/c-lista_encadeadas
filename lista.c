/*
listas encadeadas -  crescem conforme vamos precisando armazenar novos elementos, diminuem quando
removemos elementos, crescem e diminuem dinamicamete. Economiza memória. Mais eficiente que um vetor.
Estrutura para guardar a informação de cada elemento e um ponteiro para o próximo elemento.
Último elemente da lita tem um ponteiro inválido = NULL
O nó vai ser representado por uma Struct
*/


#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


struct lista
{
	int informacao;
	//ponteiro para o proximo nó da lista
	struct lista* prox;
};

//funcao para criar uma lista vazia
Lista* criar_lista()
{
	return NULL;
}

//Funcao recebe como entrada a lista na qual será inserido o novo elemento e a infomação do novo
//elemento e retorna a nova lista, representada pelo ponteiro para o novo elemento
//vai inserir no head da lista
Lista* inserir_lista(Lista* list, int i)
{
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo->informacao = i;
	novo->prox = list;
	return novo;
}

void imprimir_lista(Lista* list)
{
	//variável auxiliar é um ponteiro e o laço começa em list
	Lista * aux;
	int i = 1;
	for (aux = list ; aux != NULL; aux = aux->prox)
	{
		printf("indice:%d conteudo:%d\n", i, aux ->informacao);
		i++;
	}
}

int verificar_lista_vazia (Lista* l)
{
	if (l == NULL)
		return 1;

	return 0;

}

Lista* buscar(Lista * list, int vetor)
{

	lista * aux;
	for (aux = list ; aux != NULL;  aux = aux->prox)
	{
		if(aux->informacao == vetor)
			return aux;
	}
	return NULL;
}

//funcao remoção tem que consertar o encadeamento da lista antes de limpar o espaço alocado
//em memória. Ex:. Excluiu o segundo elemento que apostava para o terceiro, agora o primeiro
//elemento que vai ter que apontar para o terceiro.
//Tem que fazer um ponteiro para o elemento anterior.

Lista* remover (Lista* list, int vetor)
{
	Lista* ant = NULL; //ponteiro para o elemento anteruir
	Lista* pont = list; //poteiro para percorrer a lista

	//percorrer para achar qual elemento remover
	while (vetor != NULL  && pont->informacao  != vetor)
	{
		//guardar a refenencia e apontar para o proximo
		ant = pont;
		pont = pont->prox;
	}
	//se pont for == a NULL significa que nao achao o elemento
	if (pont == NULL)
	{
		return list;

	}
	//se achou algo temos que remover
	//removao do inicio
	if (ant == NULL)
	{
		list = pont->prox;
	}
	//remove do meio da lista
	//Ex:. exclui o segundo, agora o primeiro aponta para o terceiro/ ant -> pont ->prox
	else
	{
		ant-> prox = pont->prox;
	}
	free(pont);
	return list;


}

//funcao vai percorrer elemento por elemento e liberar cada elemento
void liberar(Lista* list)
{
	Lista* pont = list;
	while (pont != NULL)
	{
		Lista* temp = pont->prox;
		free(pont);
		pont = temp;
	}

}

//vai ter que ter 2 ponteiros associados para percorrer a lista simultaneamente
//e comparar a cada par de elemento
int comparar_se_sao_iguais(Lista* lista1, Lista* lista2)
{
	Lista* p1 = lista1;
	Lista* p2 = lista2;

	while (p1 != NULL && p2 != NULL)
	{
		if (p1->informacao != p2-> informacao)
			//retorna 0 indicando que sao diferentes
			return 0;
		p1 = p1->prox;
		p2 = p2->prox;
	}
	return  p1 == p2;
}
