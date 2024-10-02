#ifndef __LISTA_H__
#define __LISTA_H__

typedef struct node {
  struct node *prev;
  int key;
  struct node *next;
} *NODE;

typedef struct list {
  NODE head;
} *LIST;

void insere_node(LIST, NODE);
void insere_valor(LIST, int);

void imprime_lista(LIST);

NODE procura_node(LIST, int);

NODE remove_node(LIST, NODE);
NODE remove_node_i(LIST, int);
void deleta_node(LIST, NODE);
void deleta_node_i(LIST, int);

LIST cria_lista();
void deleta_lista(LIST);

#endif