#include <stdio.h>
#include <stdlib.h>

#include "lista.h"
#include "memory.h"

int main(int argc, char const* argv[]) {
  LIST l = cria_lista();
  imprime_memoria();
  insere_valor(l, 123);
  imprime_memoria();
  insere_valor(l, 321);
  imprime_memoria();
  insere_valor(l, 333);
  imprime_memoria();
  deleta_node_i(l, 333);
  imprime_memoria();
  imprime_lista(l);
  imprime_memoria();
  deleta_lista(l);
  imprime_memoria();

  return 0;
}