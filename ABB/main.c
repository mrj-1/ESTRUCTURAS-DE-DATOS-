#include "ABB.h"

int main(){
  struct abb* arbol;
  arbol=agregar(arbol,4);
  arbol=agregar(arbol,3);
  arbol=agregar(arbol,2);
  arbol=agregar(arbol,1);
  arbol=agregar(arbol,5);
  arbol=agregar(arbol,6);
  arbol=agregar(arbol,7);
  printf("mostrar en preorden\n");
  mostrarpre(arbol);
  printf("\n");
  printf("mostrar en inorden\n");
  mostrarin(arbol);
  printf("\n");
  printf("mostrar en postorden\n");
  mostrarpost(arbol);

  return 0;
}