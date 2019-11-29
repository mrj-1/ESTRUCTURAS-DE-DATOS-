#include "ABB.h"

struct abb* agregar (struct abb* raiz, int dato){
  if(raiz==NULL){
    raiz=(struct abb*)malloc(sizeof(struct abb));
    raiz->dato=dato;
    printf("agragar %d \n",dato);
    raiz->der=NULL;
    raiz->izq=NULL;
    return raiz;
  }
  if(dato==raiz->dato){
    return raiz;
  }
  if(dato>raiz->dato){
    raiz->der=agregar(raiz->der,dato);
    return raiz;
  }
  if(dato<raiz->dato){
    raiz->izq=agregar(raiz->izq,dato);
    return raiz;
  }
}

void mostrarpre(struct abb* raiz){
  if (raiz == NULL)
  	return;
  mostrarpre(raiz->izq);
  printf ("%d, ", raiz->dato);
	mostrarpre(raiz->der);
}
void mostrarin(struct abb* raiz){
  if (raiz == NULL)
  	return;
  printf ("%d, ", raiz->dato);
  mostrarin(raiz->izq);
	mostrarin(raiz->der);
}
void mostrarpost(struct abb* raiz){
  if (raiz == NULL)
  	return;
  mostrarpost(raiz->izq);
	mostrarpost(raiz->der);
  printf ("%d, ", raiz->dato);
}


struct abb* buscar(struct abb* raiz, int dato){
  if(dato==raiz->dato)
    return raiz;
  if(dato>raiz->dato)
    return buscar(raiz->der,dato);;
  if(dato<raiz->dato)
    return buscar(raiz->izq,dato);;
}

struct abb* eliminar(struct abb* raiz, int dato){
  struct abb* nodo =buscar(raiz,dato))
  if(nodo==raiz){

  }
}