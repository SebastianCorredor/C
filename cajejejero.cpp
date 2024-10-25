int main()
{
    int n1, retiro, Mil, Dos_mil, Cinco_mil, Diez_mil, Veinte_mil, Cincuenta_mil, Cien_mil;
    printf("ingrese el total a retirar: \n ");
    scanf("%d", &n1);
    if (n1 < 1000)
    {
        printf("Lo sentimos, no se puede retirar menos de 1000 pesos");
    }
    if (n1 > 10000000)
    {
        printf(" Lo sentimos, el cajero no cuenta con esa cantidad de dinero");
    }  

   
    if ((n1%1000)>0)
    {
        printf(" Lo sentimos, el cajero puede entregar valores multiplos de 1000");
    }
    else
    {
        if ((n1>=1000) && (n1<= 10000000))
        {
            printf("cantidad de billetes a reclamar: ");
           
            Cien_mil=n1/100000;
            if (Cien_mil>=1)
            {
                n1= n1-(Cien_mil * 100000);
                printf(" ; Cien_mil: %d ",Cien_mil);
            }
           
            Cincuenta_mil=n1/50000;
            if (Cincuenta_mil>=1)
            {
                n1=n1-(Cincuenta_mil * 50000);
                printf(" ; Cincuenta_mil: %d  ",Cincuenta_mil);
            }
           
            Veinte_mil=n1/20000;
            if (Veinte_mil>=1)
            {
                n1=n1-(Veinte_mil * 20000);
                printf(" ; Veinte_mil: %d  ",Veinte_mil);
            }
            Diez_mil=n1/10000;
            if (Diez_mil>=1)    
            {    
                n1=n1-(Diez_mil * 10000);
                printf(" ; Diez_mil: %d ",Diez_mil);
            }
       
            Cinco_mil=n1/5000;
            if (Cinco_mil>=1)
            {  
                n1=n1-(Cinco_mil * 5000);
                printf(" ; Cinco_mil: %d  ",Cinco_mil);
            }
           
            Dos_mil=n1/2000;
            if (Dos_mil>=1)
            {    
                n1=n1-(Dos_mil * 2000);
                printf(" ; Dos_mil: %d   ",Dos_mil);
            }
           
            Mil=n1/1000;
            if (Mil>=1)
            {    
                n1=n1-(Mil * 1000);
                printf(" ; Mil: %d  ",Mil);    
            }             
        }
    }
    return 0;
}
