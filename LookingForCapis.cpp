#include <stdio.h>
int girar_numero(int n){
    int resto,invertido=0;                                            
    while(n!=0)                               
      {
         resto=n%10;
         n=n/10;         
         invertido=invertido*10+resto;         
       }
return invertido;
}
int main(void){
    int n,guardar_n,comparar,volteado,bandera=100;comparar;
    int N,sumas=0;
    scanf("%d",&N);
    while(N>0){
    scanf("%d", &n);
    while(bandera>0){
        volteado=girar_numero(n);
        guardar_n=n+volteado;
        comparar=girar_numero(guardar_n);
        if(guardar_n==comparar){
            bandera=0;
            printf("%d", comparar);
            printf("\n");
        }
        if(guardar_n!=comparar){
            n=guardar_n;
            bandera=bandera-1;
            sumas=sumas+1;
        }
    }
    if(sumas==100){
        printf("IMPOSIBLE");
    }
    sumas=0;
    comparar=0;
    guardar_n=0;
    volteado=0;
    n=0;
    N=N-1;
    bandera=100;
}
}
