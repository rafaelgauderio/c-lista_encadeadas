#include <stdio.h>
#include "lista.h"
#include <locale.h>


int main()
{

	setlocale(LC_ALL, "");

	Lista* lista;
	lista = criar_lista();

	if(verificar_lista_vazia(lista))
	{
		printf("A lista está vazia!\n");
	}
	else
	{
		printf("A lista NÃO está vazia!\n");
	}


	lista = inserir_lista(lista, 10);
	lista = inserir_lista(lista, 20);
	lista = inserir_lista(lista, 32);
	lista = inserir_lista(lista, 55);
	lista = inserir_lista(lista, 73);
	lista = inserir_lista(lista, 8);



	printf("\nLista encadeada\n");
	imprimir_lista(lista);

	if(verificar_lista_vazia(lista))
	{
		printf("A lista está vazia!\n");
	}
	else
	{
		printf("A lista NÃO está vazia!\n");
	}

	int elemento = 0;

	printf("\nInforme um número inteiro para BUSCAR lista encadeada:\n");
	scanf("%d", &elemento);

	if (buscar(lista, elemento) == NULL)
	{
		printf("\nO número %d não foi encontrado na lista!\n", elemento);
	}
	else
	{
		printf("\nFoi encontrado o elemento na lista!\n");
	}
	int elemento_remov;
	printf("\nInforme um numero para ser REMOVIDO da lista:\n");
	scanf("%d", &elemento_remov);
	
	
	lista = remover(lista,elemento_remov);
	
	printf("Impressao da lista sem o elemento removido\n");
	imprimir_lista(lista);	
	liberar(lista);
	
	return 0;
}

