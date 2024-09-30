#include <stdio.h>
#include <stdlib.h>

#include "lista.h"
#include "memory.h"

int main(int argc, char const* argv[]) {
  LIST l = cria_lista();
  insere_valor(l, 123);
  insere_valor(l, 321);
  insere_valor(l, 333);
  deleta_node_i(l, 1233);
  imprime_lista(l);
  deleta_lista(l);

  byte_t* end = aloca(sizeof(long long));
  // TODO: excluir
  printf("%d\n", end[-1]);

  byte_t* end2 = aloca(sizeof(int));
  // TODO: excluir
  printf("%d\n", end2[-1]);

  byte_t* end3 = aloca(sizeof(long long));
  // TODO: excluir
  printf("%d\n", end3[-1]);

  imprime_memoria();
  libera(end2);
  imprime_memoria();

  byte_t* end4 = aloca(sizeof(long long));
  // TODO: excluir
  printf("%d\n", end4[-1]);

  imprime_memoria();
  return 0;
}