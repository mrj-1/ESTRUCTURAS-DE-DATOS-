#ifndef __ABB_H__
#define __ABB_H__
#endif
#include <stdio.h>
#include <stdlib.h>

struct abb{
  int dato;
  struct abb* der;
  struct abb* izq;
};

struct abb* agregar(struct abb*,int );
struct abb* buscar(struct abb*, int);
//struct abb* eliminar(struct abb*, int);
void mostrarpre(struct abb*);
void mostrarin(struct abb*);
void mostrarpost(struct abb*);
