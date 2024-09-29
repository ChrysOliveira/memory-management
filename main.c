#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(int argc, char const *argv[]) {
  LIST l = cria_lista();
  insere_valor(l, 123);
  insere_valor(l, 321);
  insere_valor(l, 333);

  deleta_node_i(l, 1233);

  imprime_lista(l);

  return 0;
}
