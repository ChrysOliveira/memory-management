#include "memory.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// TODO: verify if we will need to ajust the values save strateg to accept
// numerics values bigger than 255
byte_t vector[MEM_LEN] = {'\0'};

bool valid_space(int s, int e) {
  for (int i = s; i < e; i++) {
    if (vector[i] != '\0') {
      return false;
    }
  }
  return true;
}

byte_t* aloca(byte_t s) {
  for (int i = 0; i < MEM_LEN; i++) {
    if (vector[i] != '\0') {
      i += vector[i];
      continue;
    } else if (vector[i] == '\0' && !valid_space(i, i + s)) {
      continue;
    } else {
      vector[i] = s;
      return &vector[i + 1];
    }
  }
}

void imprime_memoria() {
  printf("Memory values:\n");
  for (int i = 0; i < MEM_LEN; i++) {
    if (vector[i] != '\0') {
      printf("0x%08x: %d\n", i, vector[i]);
    }
  }
  printf("\n");
}

void libera(void* addr) {
  byte_t* byte_addr = (byte_t*)addr;

  byte_t s = byte_addr[-1];
  byte_addr[-1] = '\0';

  for (int i = 0; i < s; i++) {
    byte_addr[i] = '\0';
  }
}