#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertaNodo (ptrNodoArbol*ptrArbol, int valor);
void preorden (ptrNodoArbol ptrArbol);
void postorden (ptrNodoArbol ptrArbol);
void inorden (ptrNodoArbol ptrArbol);

struct nodoArbol{
 struct nodoArbol *ptrIzq;
 int dato;
 struct nodoArbol *ptrDer;
};

typedef struct nodoArbol NodoArbol;
typedef NodoArbol *ptrNodoArbol;


int main() {
  int i;
  int elemento;
  ptrNodoArbol ptrRaiz = NULL;

  srand(time(NULL));
printf("numeros colocadados en el arbol son: \n");

  for (i=1;i<=10;i++){
    elemento =rand()%15;
    printf("%3d",elemento);
    insertaNodo(&ptrRaiz,elemento);
    }
  printf("\nRecorrdio en preorden\n");
  preorden(ptrRaiz);

  printf("\nRecorrdio en inorden\n");
  inorden(ptrRaiz);

  printf("\nRecorrdio en postorden\n");
  postorden(ptrRaiz);

  return 0;
}


void insertaNodo (ptrNodoArbol*ptrArbol,int valor){
 if(*ptrArbol==NULL){
  *ptrArbol = malloc(sizeof(NodoArbol));}
    if(*ptrArbo
void insertaNodo (ptrNodoArbol*ptrArbol,int valor){
 if(*ptrArbol==NULL){
  *ptrArbol = malloc(sizeof(NodoArbol));}
    if(*ptrArbol!=NULL){
    (*ptrArbol) ->dato=valor;
    (*ptrArbol) ->ptrIzq=NULL;
    (*ptrArbol) ->ptrDer=NULL;
     };
    else {
     printf("no se inserto %d.No hay memoria disponible \n");
     
   };
  if(valor <(*ptrArbol)->dato){
    insertaNodo (&((*ptrArbol)->ptrIzq),valor);
    };
  else if(valor>(*ptrArbol)->dato){
    insertaNodo (&((*ptrArbol)->ptrDer),valor);
   
else if(valor>(*ptrArbol)->dato){
    insertaNodo (&((*ptrArbol)->ptrDer),valor);
    };
  else {
    printf("dup");
    };
};

void inorden (ptrNodoArbol ptrArbol){
if (ptrArbol !=NULL){
  inorden (ptrArbol->ptrIzq);
  printf("%3d",ptrArbol->dato);
  inorden (ptrArbol->ptrDer);
   }
  };

void preorden (ptrNodoArbol ptrArbol){
if (ptrArbol !=NULL){
  printf("%3d",ptrArbol->dato);
  preorden (ptrArbol->ptrIzq);
  preorden (ptrArbol->ptrDer);
   }
  };

void postorden (ptrNodoArbol ptrArbol){
if (ptrArbol !=NULL){
  postorden (ptrArbol->ptrIzq);
  postorden (ptrArbol->ptrDer);
  printf("%3d",ptrArbol->dato);
   }
  };
