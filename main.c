#include <stdio.h>
#include "lista.h"
#include <locale.h>


int main()
{	
	
	setlocale(LC_ALL,"");
	
	Lista* lista;
	lista = criar_lista();
	
	if(verificar_lista_vazia(lista)) {
		printf("A lista est� vazia!\n");
	}
	else {
		printf("A lista N�O est� vazia!\n");
	}
	
	
	lista = inserir_lista(lista,10);
	lista = inserir_lista(lista,20);
	lista = inserir_lista(lista,32);
	lista = inserir_lista(lista,55);
	lista= inserir_lista(lista,73);
	lista = inserir_lista(lista,8);
	
	
	
	printf("\nLista encadeada\n");
	imprimir_lista(lista);
	
	if(verificar_lista_vazia(lista)) {
		printf("A lista est� vazia!\n");
	}
	else {
		printf("A lista N�O est� vazia!\n");
	}
	
	int elemento=0;
	
	printf("\nInforme um n�mero inteiro para verificar se ele est� na lista encadeada:\n");
	scanf("%d",&elemento);	
	
	if (buscar(lista, elemento) == NULL) {
		printf("\nO n�mero %d n�o foi encontrado na lista!\n",elemento);
	}
	else {
		printf("\nFoi encontrado o elemento na lista!\n");
	}
	
	return 0;
}

