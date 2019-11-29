#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
struct nodo{
       int dato;
       int FE;
       struct nodo *ptrde;
       struct nodo *ptriz;
};

struct nodo *novonodo(int datito){
       struct nodo *ptrN;
       ptrN=(struct nodo*)malloc(sizeof(struct nodo));
       ptrN->dato=datito;
       ptrN->ptrde=NULL;
       ptrN->ptriz=NULL;
       ptrN->FE=0;
       return ptrN;
}
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

void rotsiii(struct nodo **ptr1){
	struct nodo *ptrAux = (*ptr1)->ptriz;
	(*ptr1)->ptriz=ptrAux->ptrde;
	ptrAux->ptrde=(*ptr1);
	(*ptr1)=ptrAux;
}

void rotsidd(struct nodo **ptr1){
	struct nodo *ptrAux = (*ptr1)->ptrde;
	(*ptr1)->ptrde=ptrAux->ptriz;
	ptrAux->ptriz=(*ptr1);
	(*ptr1)=ptrAux;
}

void rotdoid(struct nodo **ptr1){
	rotsidd(&((*ptr1)->ptriz));
	rotsiii(ptr1);
}

void rotdodi(struct nodo **ptr1){
	rotsiii(&((*ptr1)->ptrde));
	rotsidd(ptr1);
}

int prof(struct nodo *ptrCom){
    int profi, profd;
    if(ptrCom==NULL)
        return 0;
    else{
        profi=prof(ptrCom->ptriz);
        profd=prof(ptrCom->ptrde);
        if(profi>profd)
            return profi+1;
        else
            return profd+1;
    }
}



void arbol(struct nodo **ptrCema, int quenta){
    int i,j,x;
    i=quenta;
    if((*ptrCema)!=NULL){
    	if((*ptrCema)->ptrde!=NULL){
    		if((*ptrCema)->ptrde->ptrde!=NULL){
    			if((*ptrCema)->ptrde->ptrde->ptrde!=NULL){
    				if((*ptrCema)->ptrde->ptrde->ptrde->ptrde!=NULL){
    					gotoxy(96,7);
    					gotoxy(96,8);
    					printf("%d",(*ptrCema)->ptrde->ptrde->ptrde->ptrde->dato);
					}
					if((*ptrCema)->ptrde->ptrde->ptrde->ptriz!=NULL){
						
    					gotoxy(90,8);
    					printf("%d",(*ptrCema)->ptrde->ptrde->ptrde->ptriz->dato);
					}
					
    				gotoxy(93,6);
    				printf("%d",(*ptrCema)->ptrde->ptrde->ptrde->dato);
				}
				if((*ptrCema)->ptrde->ptrde->ptriz!=NULL){
					if((*ptrCema)->ptrde->ptrde->ptriz->ptrde!=NULL){
						
    					gotoxy(84,8);
    					printf("%d",(*ptrCema)->ptrde->ptrde->ptriz->ptrde->dato);
					}
					if((*ptrCema)->ptrde->ptrde->ptriz->ptriz!=NULL){
						
    					gotoxy(78,8);
    					printf("%d",(*ptrCema)->ptrde->ptrde->ptriz->ptriz->dato);
					}
					
					gotoxy(81,6);
    				printf("%d",(*ptrCema)->ptrde->ptrde->ptriz->dato);
				}
				
				gotoxy(87,4);
    			printf("%d",(*ptrCema)->ptrde->ptrde->dato);
			}
			if((*ptrCema)->ptrde->ptriz!=NULL){
    			if((*ptrCema)->ptrde->ptriz->ptrde!=NULL){
    				if((*ptrCema)->ptrde->ptriz->ptrde->ptrde!=NULL){
    					
    					gotoxy(70,8);
    					printf("%d",(*ptrCema)->ptrde->ptriz->ptrde->ptrde->dato);
					}
					if((*ptrCema)->ptrde->ptriz->ptrde->ptriz!=NULL){
						
    					gotoxy(65,8);
    					printf("%d",(*ptrCema)->ptrde->ptriz->ptrde->ptriz->dato);
					}
					
    				gotoxy(68,6);
    				printf("%d",(*ptrCema)->ptrde->ptriz->ptrde->dato);
				}
				if((*ptrCema)->ptrde->ptriz->ptriz!=NULL){
					if((*ptrCema)->ptrde->ptriz->ptriz->ptrde!=NULL){
						
    					gotoxy(59,8);
    					printf("%d",(*ptrCema)->ptrde->ptriz->ptriz->ptrde->dato);
					}
					if((*ptrCema)->ptrde->ptriz->ptriz->ptriz!=NULL){
						
    					gotoxy(53,8);
    					printf("%d",(*ptrCema)->ptrde->ptriz->ptriz->ptriz->dato);
					}
					
					gotoxy(56,6);
    				printf("%d",(*ptrCema)->ptrde->ptriz->ptriz->dato);
				}
				
				gotoxy(62,4);
    			printf("%d",(*ptrCema)->ptrde->ptriz->dato);
			}
			
			gotoxy(75,2);
    		printf("%d",(*ptrCema)->ptrde->dato);
		}
		if((*ptrCema)->ptriz!=NULL){
    		if((*ptrCema)->ptriz->ptrde!=NULL){
    			if((*ptrCema)->ptriz->ptrde->ptrde!=NULL){
    				if((*ptrCema)->ptriz->ptrde->ptrde->ptrde!=NULL){
    					
    					gotoxy(48,8);
    					printf("%d",(*ptrCema)->ptriz->ptrde->ptrde->ptrde->dato);
					}
					if((*ptrCema)->ptriz->ptrde->ptrde->ptriz!=NULL){
						
    					gotoxy(40,8);
    					printf("%d",(*ptrCema)->ptriz->ptrde->ptrde->ptriz->dato);
					}
					
    				gotoxy(43,6);
    				printf("%d",(*ptrCema)->ptriz->ptrde->ptrde->dato);
				}
				if((*ptrCema)->ptriz->ptrde->ptriz!=NULL){
					if((*ptrCema)->ptriz->ptrde->ptriz->ptrde!=NULL){
						
    					gotoxy(34,8);
    					printf("%d",(*ptrCema)->ptriz->ptrde->ptriz->ptrde->dato);
					}
					if((*ptrCema)->ptriz->ptrde->ptriz->ptriz!=NULL){
						
    					gotoxy(28,8);
    					printf("%d",(*ptrCema)->ptriz->ptrde->ptriz->ptriz->dato);
					}
					
					gotoxy(31,6);
    				printf("%d",(*ptrCema)->ptriz->ptrde->ptriz->dato);
				}
				
				gotoxy(37,4);
    			printf("%d",(*ptrCema)->ptriz->ptrde->dato);
			}
			if((*ptrCema)->ptriz->ptriz!=NULL){
    			if((*ptrCema)->ptriz->ptriz->ptrde!=NULL){
    				if((*ptrCema)->ptriz->ptriz->ptrde->ptrde!=NULL){
    					
    					gotoxy(22,8);
    					printf("%d",(*ptrCema)->ptriz->ptriz->ptrde->ptrde->dato);
					}
					if((*ptrCema)->ptriz->ptriz->ptrde->ptriz!=NULL){
						
    					gotoxy(16,8);
    					printf("%d",(*ptrCema)->ptriz->ptriz->ptrde->ptriz->dato);
					}
					
    				gotoxy(19,6);
    				printf("%d",(*ptrCema)->ptriz->ptriz->ptrde->dato);
				}
				if((*ptrCema)->ptriz->ptriz->ptriz!=NULL){
					if((*ptrCema)->ptriz->ptriz->ptriz->ptrde!=NULL){
						
    					gotoxy(10,8);
    					printf("%d",(*ptrCema)->ptriz->ptriz->ptriz->ptrde->dato);
					}
					if((*ptrCema)->ptriz->ptriz->ptriz->ptriz!=NULL){
						
    					gotoxy(4,8);
    					printf("%d",(*ptrCema)->ptriz->ptriz->ptriz->ptriz->dato);
					}
					gotoxy(7,6);
    				printf("%d",(*ptrCema)->ptriz->ptriz->ptriz->dato);
				}
				gotoxy(13,4);
    			printf("%d",(*ptrCema)->ptriz->ptriz->dato);
			}
			gotoxy(25,2);
    		printf("%d",(*ptrCema)->ptriz->dato);
		}
		gotoxy(50,0);
    	printf("%d",(*ptrCema)->dato);
    	gotoxy(0,10);
    	printf("\nEl arbol esta por niveles.\n");
		}else{
			printf("El arbol esta vacio!\n");
		}
    	
	}


void arbolc(struct nodo **ptrCema, int quenta){
    int i,j,x;
    i=quenta;
    if((*ptrCema)!=NULL){
    	if((*ptrCema)->ptrde!=NULL){
    		if((*ptrCema)->ptrde->ptrde!=NULL){
    			if((*ptrCema)->ptrde->ptrde->ptrde!=NULL){
    				if((*ptrCema)->ptrde->ptrde->ptrde->ptrde!=NULL){
    					gotoxy(96,8);
    					printf("%c",(*ptrCema)->ptrde->ptrde->ptrde->ptrde->dato);
					}
					if((*ptrCema)->ptrde->ptrde->ptrde->ptriz!=NULL){
    					gotoxy(90,8);
    					printf("%c",(*ptrCema)->ptrde->ptrde->ptrde->ptriz->dato);
					}
    				gotoxy(93,6);
    				printf("%c",(*ptrCema)->ptrde->ptrde->ptrde->dato);
				}
				if((*ptrCema)->ptrde->ptrde->ptriz!=NULL){
					if((*ptrCema)->ptrde->ptrde->ptriz->ptrde!=NULL){
    					gotoxy(84,8);
    					printf("%c",(*ptrCema)->ptrde->ptrde->ptriz->ptrde->dato);
					}
					if((*ptrCema)->ptrde->ptrde->ptriz->ptriz!=NULL){
    					gotoxy(78,8);
    					printf("%c",(*ptrCema)->ptrde->ptrde->ptriz->ptriz->dato);
					}
					gotoxy(81,6);
    				printf("%c",(*ptrCema)->ptrde->ptrde->ptriz->dato);
				}
				gotoxy(87,4);
    			printf("%c",(*ptrCema)->ptrde->ptrde->dato);
			}
			if((*ptrCema)->ptrde->ptriz!=NULL){
    			if((*ptrCema)->ptrde->ptriz->ptrde!=NULL){
    				if((*ptrCema)->ptrde->ptriz->ptrde->ptrde!=NULL){
    					gotoxy(70,8);
    					printf("%c",(*ptrCema)->ptrde->ptriz->ptrde->ptrde->dato);
					}
					if((*ptrCema)->ptrde->ptriz->ptrde->ptriz!=NULL){
    					gotoxy(65,8);
    					printf("%c",(*ptrCema)->ptrde->ptriz->ptrde->ptriz->dato);
					}
    				gotoxy(68,6);
    				printf("%c",(*ptrCema)->ptrde->ptriz->ptrde->dato);
				}
				if((*ptrCema)->ptrde->ptriz->ptriz!=NULL){
					if((*ptrCema)->ptrde->ptriz->ptriz->ptrde!=NULL){
    					gotoxy(59,8);
    					printf("%c",(*ptrCema)->ptrde->ptriz->ptriz->ptrde->dato);
					}
					if((*ptrCema)->ptrde->ptriz->ptriz->ptriz!=NULL){
    					gotoxy(53,8);
    					printf("%c",(*ptrCema)->ptrde->ptriz->ptriz->ptriz->dato);
					}
					gotoxy(56,6);
    				printf("%c",(*ptrCema)->ptrde->ptriz->ptriz->dato);
				}
				gotoxy(62,4);
    			printf("%c",(*ptrCema)->ptrde->ptriz->dato);
			}
			gotoxy(75,2);
    		printf("%c",(*ptrCema)->ptrde->dato);
		}
		if((*ptrCema)->ptriz!=NULL){
    		if((*ptrCema)->ptriz->ptrde!=NULL){
    			if((*ptrCema)->ptriz->ptrde->ptrde!=NULL){
    				if((*ptrCema)->ptriz->ptrde->ptrde->ptrde!=NULL){
    					gotoxy(48,8);
    					printf("%c",(*ptrCema)->ptriz->ptrde->ptrde->ptrde->dato);
					}
					if((*ptrCema)->ptriz->ptrde->ptrde->ptriz!=NULL){
    					gotoxy(40,8);
    					printf("%c",(*ptrCema)->ptriz->ptrde->ptrde->ptriz->dato);
					}
    				gotoxy(43,6);
    				printf("%c",(*ptrCema)->ptriz->ptrde->ptrde->dato);
				}
				if((*ptrCema)->ptriz->ptrde->ptriz!=NULL){
					if((*ptrCema)->ptriz->ptrde->ptriz->ptrde!=NULL){
    					gotoxy(34,8);
    					printf("%c",(*ptrCema)->ptriz->ptrde->ptriz->ptrde->dato);
					}
					if((*ptrCema)->ptriz->ptrde->ptriz->ptriz!=NULL){
    					gotoxy(28,8);
    					printf("%c",(*ptrCema)->ptriz->ptrde->ptriz->ptriz->dato);
					}
					gotoxy(31,6);
    				printf("%c",(*ptrCema)->ptriz->ptrde->ptriz->dato);
				}
				gotoxy(37,4);
    			printf("%c",(*ptrCema)->ptriz->ptrde->dato);
			}
			if((*ptrCema)->ptriz->ptriz!=NULL){
    			if((*ptrCema)->ptriz->ptriz->ptrde!=NULL){
    				if((*ptrCema)->ptriz->ptriz->ptrde->ptrde!=NULL){
    					gotoxy(22,8);
    					printf("%c",(*ptrCema)->ptriz->ptriz->ptrde->ptrde->dato);
					}
					if((*ptrCema)->ptriz->ptriz->ptrde->ptriz!=NULL){
    					gotoxy(16,8);
    					printf("%c",(*ptrCema)->ptriz->ptriz->ptrde->ptriz->dato);
					}
    				gotoxy(19,6);
    				printf("%c",(*ptrCema)->ptriz->ptriz->ptrde->dato);
				}
				if((*ptrCema)->ptriz->ptriz->ptriz!=NULL){
					if((*ptrCema)->ptriz->ptriz->ptriz->ptrde!=NULL){
    					gotoxy(10,8);
    					printf("%c",(*ptrCema)->ptriz->ptriz->ptriz->ptrde->dato);
					}
					if((*ptrCema)->ptriz->ptriz->ptriz->ptriz!=NULL){
    					gotoxy(4,8);
    					printf("%c",(*ptrCema)->ptriz->ptriz->ptriz->ptriz->dato);
					}
					gotoxy(7,6);
    				printf("%c",(*ptrCema)->ptriz->ptriz->ptriz->dato);
				}
				gotoxy(13,4);
    			printf("%c",(*ptrCema)->ptriz->ptriz->dato);
			}
			gotoxy(25,2);
    		printf("%c",(*ptrCema)->ptriz->dato);
		}
		gotoxy(50,0);
    	printf("%c",(*ptrCema)->dato);
    	gotoxy(0,10);
    	printf("\nEl arbol esta por niveles.\n");
		}else{
			printf("El arbol esta vacio!\n");
		}
    	
}
struct nodo* inse(struct nodo **ptrComa, int date){
	if(*ptrComa==NULL){
		*ptrComa=novonodo(date);
	}else{
		if(date>(*ptrComa)->dato){
			inse(&(*ptrComa)->ptrde,date);
			if(prof((*ptrComa)->ptrde)-prof((*ptrComa)->ptriz)==2){
				printf("El arbol esta desbalanceado, se mostrara el subarbol que esta desbalanceado\n\n\n");
				system("pause");
				system("cls");
				arbol(ptrComa, 1);
				system("pause");
				system("cls");
				if(date>((*ptrComa)->ptrde)->dato){
					rotsidd(ptrComa);
					printf("Despues de la rotacion:\n\n\n");
		    		system("pause");
		    		system("cls");
				}		
				else{
					rotdodi(ptrComa);
					printf("Despues de la rotacion:\n\n\n");
		    		system("pause");
		    		system("cls");
				}		
			}
		}else if(date<(*ptrComa)->dato){
			inse(&(*ptrComa)->ptriz,date);
			if(prof((*ptrComa)->ptriz)-prof((*ptrComa)->ptrde)==2){	
				printf("El arbol esta desbalanceado, se mostrara el subarbol que esta desbalanceado\n\n\n");
			system("pause");
			system("cls");
			arbol(ptrComa, 1);
			system("pause");
			system("cls");														
			if(date<((*ptrComa)->ptriz)->dato){
				rotsiii(ptrComa);
				printf("Despues de la rotacion:\n\n\n");
	    		system("pause");
	    		system("cls");
			}
			else{
				rotdoid(ptrComa);	
				printf("Despues de la rotacion:\n\n\n");
	    		system("pause");
	    		system("cls");
			}	
		}	
		}else{
			printf("Ese dato ya existe\n");
			system("pause");
		}
	}	
	return *ptrComa;
}

struct nodo* insec(struct nodo **ptrComa, int date){
	if(*ptrComa==NULL){
		*ptrComa=novonodo(date);
	}else{
		if(date>(*ptrComa)->dato){
			insec(&(*ptrComa)->ptrde,date);
			if(prof((*ptrComa)->ptrde)-prof((*ptrComa)->ptriz)==2){
				printf("El arbol esta desbalanceado, se mostrara el subarbol que esta desbalanceado\n\n\n");
				system("pause");
				system("cls");
				arbolc(ptrComa, 1);
				system("pause");
				system("cls");
				if(date>((*ptrComa)->ptrde)->dato){
					rotsidd(ptrComa);
					printf("Despues de la rotacion:\n\n\n");
		    		system("pause");
		    		system("cls");	
				}
				else{
					rotdodi(ptrComa);
					printf("Despues de la rotacion:\n\n\n");
		    		system("pause");
		    		system("cls");
				}	
			}
		}else if(date<(*ptrComa)->dato){
			insec(&(*ptrComa)->ptriz,date);
			if(prof((*ptrComa)->ptriz)-prof((*ptrComa)->ptrde)==2){
				printf("El arbol esta desbalanceado, se mostrara el subarbol que esta desbalanceado\n\n\n");
				system("pause");
				system("cls");
				arbolc(ptrComa, 1);
				system("pause");
				system("cls");			
			if(date<((*ptrComa)->ptriz)->dato){
				rotsiii(ptrComa);
				printf("Despues de la rotacion:\n\n\n");
	    		system("pause");
	    		system("cls");	
			}
			else{
				rotdoid(ptrComa);
				printf("Despues de la rotacion:\n\n\n");
	    		system("pause");
	    		system("cls");
			}
		}	
		}else{
			printf("Ese dato ya existe\n");
			system("pause");
		}
	}	
	return *ptrComa;
}

void recorrer(struct nodo **ptrCama2,struct nodo **ptrH, struct nodo **ptrA){
	if((*ptrH)->ptrde != NULL){
		recorrer(ptrCama2,&(*ptrH)->ptrde,ptrA);
	}else{
		(*ptrCama2)->dato = (*ptrH)->dato;
		*ptrA = *ptrH;
		*ptrH= (*ptrH)->ptriz;
	}
}

struct nodo* masiz(struct nodo *ptrpru){
	struct nodo *nodoAc = ptrpru;
	while(nodoAc->ptriz!=NULL){
		nodoAc = nodoAc->ptriz;
	}
	return nodoAc;
}

int FE(struct nodo *ptreq){
	if(ptreq!=NULL){
		
		ptreq->FE=prof(ptreq->ptrde)-prof(ptreq->ptriz);
		return ptreq->FE;
	}else{
		return 0;
	}
}

void eliminar(struct nodo **ptrRaiz,int dato){ 
	if(*ptrRaiz!=NULL)
	if((*ptrRaiz)->dato<dato){
		eliminar(&(*ptrRaiz)->ptrde,dato);
	}else if((*ptrRaiz)->dato>dato){
		eliminar(&(*ptrRaiz)->ptriz,dato);
	}else{
		struct nodo *temp = NULL;
		if((*ptrRaiz)->ptrde == NULL || (*ptrRaiz)->ptriz == NULL){
			if((*ptrRaiz)->ptrde == NULL && (*ptrRaiz)->ptriz == NULL){ 
				temp = (*ptrRaiz);
				(*ptrRaiz) = NULL;
			}else if((*ptrRaiz)->ptrde == NULL){
				temp = (*ptrRaiz)->ptriz;
				**ptrRaiz = *temp;
			}else if((*ptrRaiz)->ptriz == NULL){
				temp = (*ptrRaiz)->ptrde;
				**ptrRaiz = *temp;
			}
			free(temp);
		}else{
	            struct nodo* temp = masiz((*ptrRaiz)->ptrde);
	            (*ptrRaiz)->dato = temp->dato;
	            eliminar(&(*ptrRaiz)->ptrde, temp->dato);
		}
	}else
	puts("Ese dato no se encontró en el arbol"); 
		if((*ptrRaiz)!=NULL){
		
	    int EC = FE(*ptrRaiz);
	 	int EI = FE((*ptrRaiz)->ptriz);
	 	int ED = FE((*ptrRaiz)->ptrde);
	 	
	    if (EC > 1 && EI >= 0){
	    	puts("El arbol se ha desbalanceado al eliminar\n");
	    	system("pause");
	    	system("cls");
	    	arbol(ptrRaiz, 1);
	    	system("pause");
	    	system("cls");
	    	puts("Rotacion");
	    	rotsidd(ptrRaiz);
	    }

	    if ( EC> 1  && EI< 0){
	    	puts("El arbol se ha desbalanceado al eliminar\n");
	    	system("pause");
	    	system("cls");
	    	arbol(ptrRaiz, 1);
	    	system("pause");
	    	system("cls");
	        puts("Rotacion");
	    	rotdodi(ptrRaiz);
	    }

	    if (EC < -1 && ED <= 0){
	    	puts("El arbol se ha desbalanceado al eliminar\n");
	    	system("pause");
	    	system("cls");
	    	arbol(ptrRaiz, 1);
	    	system("pause");
	    	system("cls");
	    	puts("Rotacion");
	    	rotsiii(ptrRaiz);
	    }
	        
	    if (EC < -1 && ED > 0){
	    	puts("El arbol se ha desbalanceado al eliminar\n");
	    	system("pause");
	    	system("cls");
	    	arbol(ptrRaiz, 1);
	    	system("pause");
	    	system("cls");
	   		puts("Rotacion");
	        rotdoid(ptrRaiz);
	    }
	    
	}
}

void eliminarc(struct nodo **ptrRaiz,int dato){ 
	if(*ptrRaiz!=NULL)
	if((*ptrRaiz)->dato<dato){
		eliminar(&(*ptrRaiz)->ptrde,dato);
	}else if((*ptrRaiz)->dato>dato){
		eliminar(&(*ptrRaiz)->ptriz,dato);
	}else{
		struct nodo *temp = NULL;
		if((*ptrRaiz)->ptrde == NULL || (*ptrRaiz)->ptriz == NULL){
			if((*ptrRaiz)->ptrde == NULL && (*ptrRaiz)->ptriz == NULL){ 
				temp = (*ptrRaiz);
				(*ptrRaiz) = NULL;
			}else if((*ptrRaiz)->ptrde == NULL){
				temp = (*ptrRaiz)->ptriz;
				**ptrRaiz = *temp;
			}else if((*ptrRaiz)->ptriz == NULL){
				temp = (*ptrRaiz)->ptrde;
				**ptrRaiz = *temp;
			}
			free(temp);
		}else{
	            struct nodo* temp = masiz((*ptrRaiz)->ptrde);
	            (*ptrRaiz)->dato = temp->dato;
	            eliminar(&(*ptrRaiz)->ptrde, temp->dato);
		}
	}else
	puts("Ese dato no se encontró en el arbol"); 
		if((*ptrRaiz)!=NULL){
		
	    int EC = FE(*ptrRaiz);
	 	int EI = FE((*ptrRaiz)->ptriz);
	 	int ED = FE((*ptrRaiz)->ptrde);
	 	
	    if (EC > 1 && EI >= 0){
	    	puts("El arbol se ha desbalanceado al eliminar\n");
	    	system("pause");
	    	system("cls");
	    	arbolc(ptrRaiz, 1);
	    	system("pause");
	    	system("cls");
	    	puts("Rotacion");
	    	rotsidd(ptrRaiz);
	    }

	    if ( EC> 1  && EI< 0){
	    	puts("El arbol se ha desbalanceado al eliminar\n");
	    	system("pause");
	    	system("cls");
	    	arbolc(ptrRaiz, 1);
	    	system("pause");
	    	system("cls");
	        puts("Rotacion");
	    	rotdodi(ptrRaiz);
	    }

	    if (EC < -1 && ED <= 0){
	    	puts("El arbol se ha desbalanceado al eliminar\n");
	    	system("pause");
	    	system("cls");
	    	arbolc(ptrRaiz, 1);
	    	system("pause");
	    	system("cls");
	    	puts("Rotacion");
	    	rotsiii(ptrRaiz);
	    }
	        
	    if (EC < -1 && ED > 0){
	    	puts("El arbol se ha desbalanceado al eliminar\n");
	    	system("pause");
	    	system("cls");
	    	arbolc(ptrRaiz, 1);
	    	system("pause");
	    	system("cls");
	   		puts("Rotacion");
	        rotdoid(ptrRaiz);
	    }
	    
	}
}

void preorden(struct nodo **ptrCema){
	if(*ptrCema!=NULL){
		printf(" %d ",(*ptrCema)->dato);
		preorden(&(*ptrCema)->ptriz);
		preorden(&(*ptrCema)->ptrde);
	}
}

void inorden(struct nodo **ptrCema){
	if(*ptrCema!=NULL){
		inorden(&(*ptrCema)->ptriz);
		printf(" %d ",(*ptrCema)->dato);
		inorden(&(*ptrCema)->ptrde);
	}
}

void postorden(struct nodo **ptrCema){
	if(*ptrCema!=NULL){
		postorden(&(*ptrCema)->ptriz);
		postorden(&(*ptrCema)->ptrde);
		printf(" %d ",(*ptrCema)->dato);
	}
}

void preordenc(struct nodo **ptrCema){
	if(*ptrCema!=NULL){
		printf(" %c ",(*ptrCema)->dato);
		preordenc(&(*ptrCema)->ptriz);
		preordenc(&(*ptrCema)->ptrde);
	}
}

void inordenc(struct nodo **ptrCema){
	if(*ptrCema!=NULL){
		inordenc(&(*ptrCema)->ptriz);
		printf(" %c ",(*ptrCema)->dato);
		inordenc(&(*ptrCema)->ptrde);
	}
}

void postordenc(struct nodo **ptrCema){
	if(*ptrCema!=NULL){
		postordenc(&(*ptrCema)->ptriz);
		postordenc(&(*ptrCema)->ptrde);
		printf(" %c ",(*ptrCema)->dato);
	}
}

struct nodo * busca(struct nodo *ptrCiema, int date){
	if(ptrCiema==NULL) 
	return NULL;
else if(date==ptrCiema->dato)
return (ptrCiema);
else if(date<ptrCiema->dato)
return busca(ptrCiema->ptriz,date);
else
return busca(ptrCiema->ptrde,date);
}


int main (){
	int noc;
 	struct nodo *ptrCimap=NULL;
 	struct nodo **ptrCima=&ptrCimap;
 	char datoChar, action;
	int datoEnt, accion;
	puts("Bienvenido al ARBOL AVL");
	puts("Vas a ingresar enteros o caracteres?\n");
	printf("1. Numeros\n2. Caracteres\n");
	scanf("%i",&noc);
	if(noc==1){
		puts("Aqui vas a poder realizar un arbol tomando datos numericos\nPor cuestiones de espacio, solo podra haber 5 niveles de profundidad.\n");
		do{
			printf ("\n 1.- Meter dato en Arbol \n ");
			printf ("2.- Sacar dato del Arbol \n ");
			printf ("3.- Imprimir arbol in-orden  \n ");
			printf ("4.- Imprimir arbol post-orden  \n ");
			printf ("5.- Imprimir arbol pre-orden \n ");
			printf ("6.- Ver el Arbol \n ");
			printf ("7.- Buscar si existe un dato \n ");
			printf ("8.- Profundidad del Arbol \n");
			printf (" 9.- Salir \n ");
			printf ("Eleccion: ");
			scanf ("%d", &accion);
			switch (accion){
				case 1:
					system("cls");
	    		    printf("Ingrese dato a meter: ");
	    		    scanf("%d",&datoEnt);
	    		    inse(ptrCima, datoEnt);
	    		    system("cls");
	    		    arbol(ptrCima, 1);
	    		    system("pause");
	    		    system("cls");
					break;
				case 2:
	    		    system("cls");
	    		    printf("Que dato quieres sacar? ");
	    		    scanf("%d",&datoEnt);
	    		    eliminar(ptrCima,datoEnt); 
	    			arbol(ptrCima, 1);
	    		    system("pause");
	    		    system("cls");
	    		    break;
				case 3:
	    			system("cls");
	    			printf("\n En in-orden: \n");
	    		    arbol(ptrCima, 1);
	    		    inorden(ptrCima);
	    		    puts("\n");
	    		    system("pause");
	    		    system("cls");
					break;
				case 4: 
	    		    system("cls");
	    		    printf("\n En post-orden: \n");
	    		    arbol(ptrCima, 1);
	    		    postorden(ptrCima);
	    		    puts("\n");
	    		    system("pause");
	    		    system("cls");
					break;
				case 5:
	    		    system("cls");
	    		    printf("\n En pre-orden: \n");
	    		    arbol(ptrCima,1);
	    		    preorden(ptrCima);
	    		    puts("\n");
	    		    system("pause");
	    		    system("cls");
					break;
				case 6:
	    		    system("cls");
	    		    arbol(ptrCima, 1);
	    		    printf("\n\n\n");
	    		    system("pause");
	    		    system("cls");
				    break;
				case 7:
					system("cls");
					printf("ingresa un valor para buscar: ");
					scanf("%d",&datoEnt);
					if(busca(*ptrCima,datoEnt)!=NULL)
						printf("\n Si esta en el arbol\n");
					else
						printf("\n No se encontro \n ");
					system("pause");
	    		    system("cls");
					break;
				case 8:
					system("cls");
					datoEnt=prof(*ptrCima);
					printf("\nProfundidad del arbol: %d\n",datoEnt);
					printf("\n");
					system("pause");
	    		    system("cls");
					break;
	    		case 9:
	      	        exit (0);
					break;
				default: 
					puts("\n Esta opcion no es valida \nIntenta con otra\n");
					system("pause");
					system("cls");
			}
		}while(accion!=9);	
	}else{
		puts("Aqui vas a poder realizar un arbol tomando caracteres odenandolos segun el alfabeto\nPor cuestiones de espacio, solo podra haber 5 niveles de profundidad.\n");
		do{
			printf ("\n 1.- Meter dato en Arbol \n ");
			printf ("2.- Sacar dato del Arbol \n ");
			printf ("3.- Imprimir arbol in-orden  \n ");
			printf ("4.- Imprimir arbol post-orden  \n ");
			printf ("5.- Imprimir arbol pre-orden \n ");
			printf ("6.- Ver el Arbol \n ");
			printf ("7.- Buscar si existe un dato \n ");
			printf ("8.- Profundidad del Arbol \n");
			printf (" 9.- Salir \n ");
			printf ("Eleccion: ");
			scanf ("%d", &accion);
			switch (accion){
				case 1:
					system("cls");
	    		    printf("Ingrese dato a meter: ");
	    		    fflush(stdin);
	    		    scanf("%c",&datoChar);
	    		    fflush(stdin);
	    		    insec(ptrCima, datoChar);
	    		    system("cls");
	    		    arbolc(ptrCima, 1);
	    		    system("pause");
	    		    system("cls");
					break;
				case 2:
	    		    system("cls");
	    		    printf("Que dato quieres sacar? ");
	    		    fflush(stdin);
	    		    scanf("%c",&datoChar);
	    		    fflush(stdin);
	    		    eliminarc(ptrCima,datoChar); 
	    			arbolc(ptrCima, 1);
	    		    system("pause");
	    		    system("cls");
	    		    break;
				case 3:
	    			system("cls");
	    			printf("\n En in-orden: \n");
	    		    arbolc(ptrCima, 1);
	    		    inordenc(ptrCima);
	    		    puts("\n");
	    		    system("pause");
	    		    system("cls");
					break;
				case 4: 
	    		    system("cls");
					printf("\n En post-orden: \n");
	    		    arbolc(ptrCima, 1);
	    		    postordenc(ptrCima);
	    		    puts("\n");
	    		    system("pause");
	    		    system("cls");
					break;
				case 5:
	    		    system("cls");
	    		    printf("\n En pre-orden: \n");
	    		    arbolc(ptrCima,1);
	    		    preordenc(ptrCima);
	    		    puts("\n");
	    		    system("pause");
	    		    system("cls");
					break;
				case 6:
	    		    system("cls");
	    		    arbolc(ptrCima, 1);
	    		    puts("\n");
	    		    system("pause");
	    		    system("cls");
				    break;
				case 7:
					system("cls");
					printf("ingresa un valor para buscar: ");
					fflush(stdin);
					scanf("%c",&datoChar);
					fflush(stdin);
					if(busca(*ptrCima,datoChar)!=NULL)
						printf("\n Si esta en el arbol\n");
					else
						printf("\n No se encontro \n ");
					system("pause");
	    		    system("cls");
					break;
				case 8:
					system("cls");
					datoEnt=prof(*ptrCima);
					printf("\nProfundidad del arbol: %d\n",datoEnt);
					printf("\n");
					system("pause");
	    		    system("cls");
	    		    break;
	    		case 9:
	      	        exit (0);
					break;
				default: 
					puts("\n Esta opcion no es valida \nIntenta con otra\n");
					system("pause");
					system("cls");
			}
	}while(accion!=9);
}