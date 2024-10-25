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
float calcularlongitud(struct pareja,struct pareja);
 float calcularlongitud(struct pareja p1, struct pareja p2)
{
    float distancia;
    distancia = sqrt((pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2)));
    return distancia;
}
int main()
{
  struct pareja puntoA,puntoB,keeper;
  puntoA=leerPareja();
  puntoB=leerPareja();
  keeper=puntoA;
  float d;
  int c,op;
  c=0;
  d=d+calcularlongitud(puntoA, puntoB);
  while (c==0)
    {
      printf("1=ingresar mas puntos");
      scanf("%i",&op);
      while (op>0);
        if (op>1)
        {
            puntoA=puntoB;
            puntoB=leerPareja();
            d=d+calcularlongitud(puntoA, puntoB);
            op=op-1;
        }
        if (op==1)
        {
            d=d+calcularlongitud(keeper, puntoB);
            printf("%f",d);
            c=c+1;
        }
    }
}
