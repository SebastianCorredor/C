#include <stdio.h>
#include <math.h>
struct pareja{
    float x;
    float y;
};
struct pareja leerPareja();
 struct pareja leerPareja ()
{
    struct pareja punto;
    scanf("%f",&punto.x);
    scanf("%f",&punto.y);
    return punto;
}
float calcularsuma(struct pareja,struct pareja);
 float calcularsuma(struct pareja p1, struct pareja p2)
{
    float distancia, distancia2;
    distancia = ((p1.x*p2.y)+(p1.y*p2.x));
    distancia2 = (p1.y*p2.y);
    return (printf("%f / %f" , distancia, distancia2));

 float calcularresta(struct pareja p1, struct pareja p2)
 
    float distancia, distancia2;
    distancia = ((p1.x*p2.y)-(p1.y*p2.x));
    distancia2 = (p1.y*p2.y);
    return (printf("%f / %f" , distancia, distancia2));
}
int main()
{
  struct pareja puntoA,puntoB;
  float d;
  int op;
    printf("1=suma");
    printf("2=resta");
    scanf("%i",&op);
    if (op==1)
    {
        puntoA=leerPareja();
        puntoB=leerPareja();
        calcularsuma(puntoA, puntoB);
    }
    else if (op==2)
    {
        puntoA=leerPareja();
        puntoB=leerPareja();
        calcularresta(puntoA, puntoB);
    }
}

