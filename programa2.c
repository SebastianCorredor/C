#include<stdio.h>
#include<conio.h>

int main(){

    int lado, perimetro;

    printf("ingrese el lado: ");
    scanf("%i", &lado);
    perimetro =lado*4;
    printf("El valor del perimetro es: ");
    printf("%i", perimetro);
    getch();

}
