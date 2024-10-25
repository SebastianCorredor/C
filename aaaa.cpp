#include <stdio.h>
int main(){
	long int cd=0,cd2=0,cd3=0,cd4=0,cd5=0;
	short int cc=0,cc2=0,cc3=0,cc4=0,cc5=0;
	float n[5],n2[5],n3[5],n4[5],n5[5];
	float percent[5];
	float s=0,s2=0,s3=0,s4=0,s5=0;
	for (int i=0; i<6 ; i++){
		printf("Porcentajes: ");
		scanf("%f", &percent[i]);
		percent[i]=percent[i]/100;
	}
	printf("Codigo estudiante 1: ");
	scanf("%ld", &cd);
	printf("Codigo Carrera 1: ");
	scanf("%hd", &cc);
	for (int i=0; i<6 ; i++){
		printf("Notas1 nea: ");
		scanf("%f", &n[i]);
		n[i]=n[i]*percent[i];
		s+=n[i];
	}
	printf("Codigo estudiante 2: ");
	scanf("%ld", &cd2);
	printf("Codigo Carrera 2: ");
	scanf("%hd", &cc2);
	for (int i=0; i<6 ; i++){
		printf("Notas2 nea: ");
		scanf("%f", &n2[i]);
		n2[i]=n2[i]*percent[i];
		s2+=n2[i];
	}
	printf("Codigo estudiante 3: ");
	scanf("%ld", &cd3);
	printf("Codigo Carrera 3: ");
	scanf("%hd", &cc3);
	for (int i=0; i<6 ; i++){
		printf("Notas3 nea: ");
		scanf("%f", &n3[i]);
		n3[i]=n3[i]*percent[i];
		s3+=n3[i];
	}
	printf("Codigo estudiante 4: ");
	scanf("%ld", &cd4);
	printf("Codigo Carrera 4: ");
	scanf("%hd", &cc4);
	for (int i=0; i<6 ; i++){
		printf("Notas4 nea: ");
		scanf("%f", &n4[i]);
		n4[i]=n4[i]*percent[i];
		s4+=n4[i];
	}
	printf("Codigo estudiante 5: ");
	scanf("%ld", &cd5);
	printf("Codigo Carrera 5: ");
	scanf("%hd", &cc5);
	for (int i=0; i<6 ; i++){
		printf("Notas5 nea: ");
		scanf("%f", &n5[i]);
		n5[i]=n5[i]*percent[i];
		s5+=n5[i];
	}
	printf("\n Estudiante1: ");
	printf("\n Codigo estudiante 1: %ld", cd);
	printf("\n Codigo Carrera 1: %hd", cc);
	printf("\n Promedio: %f", s);
	printf("\n Estudiante2: ");
	printf("\n Codigo estudiante 2: %ld", cd2);
	printf("\n Codigo Carrera 2: %hd", cc2);
	printf("\n Promedio: %f", s2);
	printf("\n Estudiante2: ");
	printf("\n Codigo estudiante 3: %ld", cd3);
	printf("\n Codigo Carrera 3: %hd", cc3);
	printf("\n Promedio: %f", s3);
	printf("\n Estudiante4: ");
	printf("\n Codigo estudiante 4: %ld", cd4);
	printf("\n Codigo Carrera 1: %hd", cc4);
	printf("\n Promedio: %f", s4);
	printf("\n Estudiante5: ");
	printf("\n Codigo estudiante 5: %ld", cd5);
	printf("\n Codigo Carrera 5: %hd", cc5);
	printf("\n Promedio: %f", s5);
	return 0;
}
