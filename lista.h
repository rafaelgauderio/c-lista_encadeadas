//pr�tipos das fun��es

typedef struct lista Lista;

//funcao de criacao da lista
Lista* criar_lista();

//fun��o que insere no inicio da lista
Lista* inserir_lista(Lista* list, int i);

//fun��o para imprimir os elementos da lista
void imprimir_lista (Lista* list);

//fun��o para verificar se a lista est� vazia
//Lista est� vazia se o seu valor � nulo
 int verificar_lista_vazia (Lista* l);

 
 //fun��o para buscar elementos na lista
 Lista* buscar(Lista * list, int vetor);
 