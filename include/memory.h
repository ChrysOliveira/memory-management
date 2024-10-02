#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <stdbool.h>
#define MEM_LEN 8192

typedef unsigned char byte_t;
byte_t* aloca(byte_t s);
void imprime_memoria();
void libera(void*);
bool valid_space(int s, int e);
#endif