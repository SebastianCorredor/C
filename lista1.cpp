#include <stdio.h>
int main(){
	float numeros[10];
	int a=0;
	printf("Cuantos numeros ingresan?");
	scanf("%d", &a);
	for (int i=0 ; i<a ; i++){
		scanf("%f", &numeros[i]);
	}
	float alto=0;
	for (int i=0; i<a; i++){
		if (numeros[i]>alto){
			alto=numeros[i];
		}
	}
	for (int i=0; i<a; i++){
		numeros[i]=numeros[i]/alto;
		printf ("%f\t", numeros[i]);
	}
	return 0;
}
