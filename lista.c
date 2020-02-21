/*
listas encadeadas -  crescem conforme vamos precisando armazenar novos elementos, diminuem quando
removemos elementos, crescem e diminuem dinamicamete. Economiza mem�ria. Mais eficiente que um vetor.
Estrutura para guardar a informa��o de cada elemento e um ponteiro para o pr�ximo elemento.
�ltimo elemente da lita tem um ponteiro inv�lido = NULL
O n� vai ser representado por uma Struct
*/


#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


struct lista
{
	int informacao;
	//ponteiro para o proximo n� da lista
	struct lista* prox;
};

//funcao para criar uma lista vazia
Lista* criar_lista()
 {
	return NULL;
}

//Funcao recebe como entrada a lista na qual ser� inserido o novo elemento e a infoma��o do novo
//elemento e retorna a nova lista, representada pelo ponteiro para o novo elemento
//vai inserir no head da lista
Lista* inserir_lista(Lista* list, int i) {
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo->informacao =i;
	novo->prox=list;
	return novo;
}

void imprimir_lista(Lista* list)
{	
	 //vari�vel auxiliar � um ponteiro e o la�o come�a em list
	 Lista * aux;
	 int i=1;
	 for (aux=list ; aux !=NULL; aux = aux->prox)
	 {
	 	printf("indice:%d conteudo:%d\n", i,aux ->informacao);
	 	i++;
	 }  	
}

 int verificar_lista_vazia (Lista* l) {
	 if (l==NULL) 
			return 1;	 
	 
		 return 0;	  
	  
 }
 
 Lista* buscar(Lista * list, int vetor) {
 	
 	lista * aux;
 	for (aux=list ; aux!=NULL;  aux=aux->prox) {
		 if(aux->informacao ==vetor) 
		 	return aux;
	 }
	 return NULL;
 }
 
 //funcao remo��o tem que consertar o encadeamento da lista antes de limpar o espa�o alocado
 //em mem�ria. Ex:. Excluiu o segundo elemento que apostava para o terceiro, agora o primeiro
 //elemento que vai ter que apontar para o terceiro.
 //Tem que fazer um ponteiro para o elemento anterior.
 
  Lista* remover (Lista* list, int vetor) {
	  
  }
