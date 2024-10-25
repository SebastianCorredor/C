#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define tam 20
int prioridad(char simbolo);
int main()
{
 	 
	int tope=-1, pos=-1,tamexp;
	char pila[tam], epos[tam];
	char expinf[tam], simbolo;
  	printf("expresion en notacion Infija: ");
    scanf("%s", &expinf);
    tamexp=strlen(expinf);
    for(int i=0; i<tamexp; i++){
    	simbolo=expinf[i];
    	if ((simbolo>='a')&&(simbolo<='z')||(simbolo>='A')&&(simbolo<='>')||(simbolo>='0')&&(simbolo<='9')){
    	pos=pos+1;
    	epos[pos]=simbolo;
    	}
   		 else{
    	 while (tope>-1 && (prioridad(simbolo)<=prioridad(pila[tope]))){
    	    pos=pos+1;
    	    epos[pos]=pila[tope];
    	    tope=tope-1;
    	    }
    	    tope=tope+1;
    	    pila[tope]=simbolo;
    	    }
    }
    while (tope>-1){
    	pos=pos+1;
    	epos[pos]=pila[tope];
    	tope=tope-1;
    	}
    for (int i=0; i<=pos; i++){
    	printf("%c", epos[i]);
    }
	return 0;	    
	}
	int prioridad (char simbolo){
	    int priori;
	    switch(simbolo){
			case '/': priori=2;break;
			case '*': priori=2;break;
			case '-': priori=1;break;
			case '+': priori=1;break;
		
	    }
	    return priori;
	}
