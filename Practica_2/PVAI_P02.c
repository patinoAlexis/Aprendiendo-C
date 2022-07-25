//PVAI_P02
//Se desplega un menu repetitivo el cual te llevara a diferentes soluciones de problemas los cuales se solucionan a travez de la llamada de funciones, que estos a su vez usan ciclos para la solucion de estos problemas.
//Fecha: 31/08/19
//Alexis Ivan Patino Victoria
#include <stdio.h>
#include <stdlib.h>
void menu();
void programa1();
void programa2();
void programa3();
void programa4();
int main(void)
{
    menu();
    return 0;
}
void menu()
{
    int prog;
    do
      {
        system("cls");
        printf(" M E N U");
            printf(" \n 1) Imprime los numeros menores de dados");
            printf(" \n 2) Calcula el promedio de 25 alumnos y dicen quienes reprobaron y quienes no");
            printf(" \n 3) Programa que lee 23 numeros y te dice los pares e impares");
            printf(" \n 4) Programa que hace la serie finobacci");
            printf(" \n 5) Salir \n  ");
        scanf("%d",&prog);
        switch(prog)
          {
            case 1:
                programa1();
                break;
            case 2:
                programa2();
                break;
            case 3:
                programa3();
                break;
            case 4:
            	programa4(); 
                break;
            case 5:
            	prog=5;
            	break;
          }
        system("pause");
      }while(prog!=5);
}
void programa1()
{
    int i,num;
    printf(" Dame un numero  ");
    scanf("%i",&num);
    for(i=1 ; (i<num && i<=6) ;i++)
      {
        printf(" %d \n",i);
      }
}
void programa2()
{
    float califi,suma,prom,sum_t;
    int i,j,aprob=0,repro=0;
    for(i=1 ; i<=25 ; i++)
        {
      	system("cls");
        for(j=1 , suma=0; j<=3 ; j++)
          {
            printf(" La calificacion numero %d del alumno %d \n",j,i);
            scanf("%f",&califi);
            suma=suma+califi;
          }
        prom=suma/3;
        if(califi >=60)
          {
          	printf(" El alumno numero %d esta aprobado",i);
			printf("\n y su promedio es: %.2f \n ",prom);
			aprob++;
          }
          else
          {
          	printf(" El alumno numero %d esta reprobado",i);
			printf("\n y su promedio es: %.2f \n ",prom);
          	repro++;
		  }
		sum_t=prom+sum_t;
		system("pause");
        }
      system("cls");
      prom=sum_t/(i-1);
      printf(" Reprobados: %d",repro);
      printf("\n Aprobados: %d",aprob);
      printf(" \n  El promedio de los alumnos es: %.2f \n ",prom);
}
void programa3()
{
    int num,impar=0,par=0,i;
    for(i=1 ; i<=23 ; i++)
      {
        printf(" Dame el numero %d  ",i);
        scanf("%d",&num);
        if((num%2)==0)
          {
            impar=impar+1;
          }
          else
          {
            par=par+1;
          }
      }
    printf(" Fueron %d numeros pares",par);
    printf(" \n Fueron %d numeros impares \n ",impar);
}
void programa4()
{
	int s=0, n, b=1,i,fibo;
	printf(" Dame un numero:  ");
	scanf("%i",&n);
	if(n>=2)
	  {
		printf(" 0 ");
		printf("\n 1 \n");
		for(i=2;i<n; i=++i)
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
