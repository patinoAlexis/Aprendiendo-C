//PVAI_P03
//menu de opciones que enseña, 4 problemas 3 de ellos se resolveran con el uso de ciclos y el otro se resolvera con if-else con forma de arbolo
//Fecha: 04/09/19
//Alexis Ivan Patino Victoria
#include <stdio.h>
#include <stdlib.h>
void menu();
void fibo();
void facto();
void digitos();
void club();

int main()
{
    menu();
    return 0;
}
void menu()
{
    int programa;
    do
      {
        system("cls");
		printf("   M   E   N   U");
            printf("\n 1) Serie de numeros fibonacci");
            printf("\n 2) Factorial de un numero");
            printf("\n 3) Cantidad de digitos de un numero");
            printf("\n 4) Promocion de 3 peliculas");
            printf("\n 5) Salir \n  ");
        scanf("%d",&programa);
        switch(programa)
          {
            case 1:
                fibo();
                break;
            case 2:
                facto();
                break;
            case 3:
                digitos();
                break;
            case 4:
                club();
                break;
          }
          printf(" \n");
        system("pause");
      }while(programa!=5);
}
/******************************************************/
/*                  Funcion fibonacci                 */
/******************************************************/
void fibo()
{
	int s=0, n, b=1,i,fibo;
	printf(" Dame un numero:  ");
	scanf("%i",&n);
	if(n>=2)
	  {
		printf(" 0 ");
		printf("\n 1 \n");
		for(i=2;i<=n; i=++i)
		  {
			fibo=s+b;
			printf(" %i \n",fibo);
			s=b;
			b=fibo;
		  }
	  }
	  else
	  {
		if(n==1)
		  { 
			printf(" 0 ");
		  }
		  else
		  {
			printf(" Error");
		  }
	  }
}
/******************************************************/
/*  Funcion que deplega el factorial de un numero     */
/******************************************************/
void facto()
{
    long j,num,fact;
    printf(" Dame el numero al que deseas sacarle factorial \n  ");
    scanf("%ld",&num);
    if(num>0)
      {
        fact=(num)*(num-1);
        for(j=2 ; j<=num-1 ; j++)
          {
            fact=(num-j)*fact;
          }
      }
      else
      {
        fact=1;
      }
    printf(" El facotrial del numero %ld es:",num);
    printf("\n %ld",fact);
}
/******************************************************/
/*  Funcion que deplega los digitos que tenga el numero  */
/******************************************************/
void digitos()
{
    int digi=0;
    double divisor;
    long num,j=1;
    printf(" Dame el numero el cual deseas saber cuantos digitos tiene \n  ");
    scanf("%ld",&num);
    if(num > 0)
      {
        do
          {
            divisor=num/j;
            j=j*10;
            digi++;
          }while(divisor>=1);
      }
      else
      {
        do
          {
            divisor=(num/(j));
            j=j*10;
            digi++;
          }while(divisor<=-1);
      }
    if( num == 0)
      {
    	printf(" El numero %ld tiene %d digito ",num,digi);
	  }
	  else
	  {
    	printf(" El numero %ld tiene %d digitos",num,digi-1);
  	  }
}
void club()
{
    int peli1,peli2,peli3,pago;
    printf(" Dame el precio de la primera pelicula \n  ");
    scanf("%d",&peli1);
    printf( " Dame el precio de la segunda pelicula \n  ");
    scanf("%d",&peli2);
    printf(" Dame el precio de la tercerca pelicula\n  ");
    scanf("%d",&peli3);
    if(peli1>peli2)
      {
        if(peli1>peli3)
          {
            pago=peli3+peli2;
          }
          else
          {
            pago=peli1+peli2;
          }
      }
      else
      {
        if(peli2>peli3)
          {
            pago=peli3+peli1;
          }
          else
          {
            pago=peli1+peli2;
          }
      }
    printf(" El pago por las 3 peliculas sera de %d",pago);
}
