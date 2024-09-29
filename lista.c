#include "lista.h"

#include <stdio.h>
#include <stdlib.h>

void insere_node(LIST l, NODE n) {
  n->next = l->head;

  if (l->head != NULL) {
    l->head->prev = n;
  }

  l->head = n;
  n->prev = NULL;
}

void insere_valor(LIST l, int v) {
  NODE n = malloc(sizeof(NODE));
  n->key = v;
  insere_node(l, n);
}

void imprime_lista(LIST l) {
  NODE aux = l->head;

  printf("lista:");
  while (aux != NULL) {
    if (aux->next == NULL) {
      printf(" %d", aux->key);
    } else {
      printf(" %d <-->", aux->key);
    }
    aux = aux->next;
  }
  printf("\n");
}

LIST cria_lista() { return (LIST)malloc(sizeof(LIST)); }

NODE procura_node(LIST l, int v) {
  NODE aux = l->head;
  while (aux != NULL && aux->key != v) {
    aux = aux->next;
  }
  return aux;
}

NODE remove_node(LIST l, NODE n) {
  if (n->prev != NULL) {
    n->prev->next = n->next;
  } else {
    l->head = n->next;
  }

  if (n->next != NULL) {
    n->next->prev = n->prev;
  }

  return n;
}

NODE remove_node_i(LIST l, int v) {
  NODE n = procura_node(l, v);

  if (n == NULL){
    printf("function remove_node_i: valor nao encontrado %d\n", v);
    return NULL;
  }

  if (n->prev != NULL) {
    n->prev->next = n->next;
  } else {
    l->head = n->next;
  }

  if (n->next != NULL) {
    n->next->prev = n->prev;
  }

  return n;
}

void deleta_node(LIST l, NODE n) {
  if (n->prev != NULL) {
    n->prev->next = n->next;
  } else {
    l->head = n->next;
  }

  if (n->next != NULL) {
    n->next->prev = n->prev;
  }

  free(n);
}

void deleta_node_i(LIST l, int v) {
  NODE n = procura_node(l, v);

  if (n == NULL) {
    printf("function deleta_node_i: valor nao encontrado %d\n", v);
    return;
  } 

  if (n->prev != NULL) {
    n->prev->next = n->next;
  } else {
    l->head = n->next;
  }

  if (n->next != NULL) {
    n->next->prev = n->prev;
  }

  free(n);
}