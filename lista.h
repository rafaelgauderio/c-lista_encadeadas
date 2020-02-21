//prótipos das funções

typedef struct lista Lista;

//funcao de criacao da lista
Lista* criar_lista();

//função que insere no inicio da lista
Lista* inserir_lista(Lista* list, int i);

//função para imprimir os elementos da lista
void imprimir_lista (Lista* list);

//função para verificar se a lista está vazia
//Lista está vazia se o seu valor é nulo
 int verificar_lista_vazia (Lista* l);

 
 //função para buscar elementos na lista
 Lista* buscar(Lista * list, int vetor);
 