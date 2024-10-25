#include <stdio.h>
#include <math.h>
struct pareja{
    float x;
    float y;
    float a;
    float b;
};
struct pareja leerPareja();
 struct pareja leerPareja ()
{
    struct pareja punto;
    scanf("%f",&punto.x);
    scanf("%f",&punto.y);
    scanf("%f",&punto.a);
    scanf("%f",&punto.b);
    return punto;
}
float calcularsuma(struct pareja,struct pareja, struct pareja, struct pareja);
 float calcularsuma(struct pareja p1, struct pareja p2,struct pareja p3, struct pareja p4)
{
    float suma;
   	if (struct pareja p2 = struct pareja p4);
    {
    	suma=((pareja p1* pareja p4)+(pareja p2*pareja p3))/pareja p2; 
	}
	else{
		suma=((pareja p1* pareja p4)+(pareja p2*pareja p3))/pareja p2*pareja p4;
	}
	return suma;
}
int main()
{
  struct pareja puntoA,puntoB;

  int op;
    scanf("%i",&op);
    if (op==1)
    {
    	puntoA=leerPareja();
  		puntoB=leerPareja();
        printf("%f",calcularsuma(puntoA,puntoB));
    }
    else
    {
        printf("sapo hpta chaux");
    }
}
