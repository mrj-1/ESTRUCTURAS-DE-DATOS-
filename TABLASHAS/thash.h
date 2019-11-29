#ifndef  __HASH_H__
#define __HASH_H__
#endif

#include <stdio.h>
#include <stdlib.h>

struct hash{
  struct Lista *dato[10];
  int cuantos;
};

struct Lista{
  struct Lista *siguiente;
  int dato;
};

void principal ();
struct Lista *crearnodo (int);
void insertar (struct hash **, int);
int buscar (struct hash *, int);
void eliminar (struct hash **, int);
int hash(int);
