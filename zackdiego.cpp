#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b,c,d,e;
    int opcion;
    int cantidad;
    
    cantidad==1;
    while (cantidad>0)
		printf("\n1. Suma ");	
        printf("\n1. Suma ");
        printf("\n2. Resta ");
        printf("\n3. Multiplicacion ");
        printf("\n4. Division ");
        printf("\nElige una opcion: ");
        scanf("%d",&opcion);
        
        if (opcion==1){
        	printf("\nIngrese el primer numero: \n");
            scanf("%f, ",&a);
            printf("\nIngresa el segundo numero: \n");
            scanf("%f, ",&b);
            printf("\nIngresa el tercer numero: \n");
            scanf("%f, ",&c);
            printf("\nIngresa el cuarto numero: \n");
            scanf("%f, ",&d);
            e=a/b+c/d;
            printf("\n El resultado es : %f", e);
		}
        if (opcion==2){
		
            printf("\nIngrese el primer numero: \n");
            scanf("%f, ",&a);
            printf("\nIngresa el segundo numero: \n");
            scanf("%f, ",&b);
            printf("\nIngresa el tercer numero: \n");
            scanf("%f, ",&c);
            printf("\nIngresa el cuarto numero: \n");
            scanf("%f, ",&d);
            e=a/b-c/d;
            printf("\n El resultado es : %f", e);
        }
        if (opcion==3){
            printf("\nIngrese el primer numero: \n");
            scanf("%f, ",&a);
            printf("\nIngresa el segundo numero: \n");
            scanf("%f, ",&b);
            printf("\nIngresa el tercer numero: \n");
            scanf("%f, ",&c);
            printf("\nIngresa el cuarto numero: \n");
            scanf("%f, ",&d);
            e=a/b*c/d;
            printf("\n El resultado es : %f", e);
    	}
        if (opcion==4){
            printf("\nIngrese el primer numero: \n");
            scanf("%f, ",&a);
            printf("\nIngresa el segundo numero: \n");
            scanf("%f, ",&b);
            printf("\nIngresa el tercer numero: \n");
            scanf("%f, ",&c);
            printf("\nIngresa el cuarto numero: \n");
            scanf("%f, ",&d);
            e=(a/b)/(c/d);
            printf("\n El resultado es : %f", e);
        	(cantidad=cantidad-1);
    	}
    return 0;	
}

