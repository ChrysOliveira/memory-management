#include "memory.h"

#include <stdio.h>
#include <stdlib.h>

byte_t vector[MEM_LEN];

void aloca(byte_t s) {
  for (int i = 0; i < MEM_LEN; i++) {
    if (&vector[i] != NULL) {
      printf("%d\n", i);
      break;
    }
  }
  printf("allocating %d bytes\n", s);
}

void libera() {}
