#include <stdio.h>
#include <conio.h>

int main(){

/*float sueldo;
printf("ingrese el sueldo");
scanf("%f", &sueldo);
    if (sueldo>3000){
            printf("Esta persona debe abonar impuestos");
    }
    getch();
    return 0;*/
    /*int num1, num2;
    printf("Ingrese dos valores");
    scanf("%i", &num1);
    scanf("%i", &num2);
    if (num1 > num2){
        printf("%i", num1);
    }
    else{
        printf("%i", num2);
    }
    getch();
    return 0;*/
    int nota1, nota2, nota3;
    float promedio;
    scanf("%i %i %i", &nota1, &nota2, &nota3);
    promedio = (nota1+nota2+nota3)/3;
    if (promedio >= 7) {
        printf("Promedio: %.2f - Promocionado", promedio);
    } else if (promedio >= 4) {
        printf("Promedio: %.2f - Regular\n", promedio);
    } else {
        printf("Promedio: %.2f - Reprobado\n", promedio);
    }

}
