//PVAI_P04
//Programa con varias funciones las cuales las mas destacadas, son las que nos ayudan a validar numeros, ya que las usaremos a lo largo de las demas practicas
//Fecha: 14/09/19
//Alexis Ivan Patino Victoria
/*******************************************************************/
/*                            Librerias                            */
/*******************************************************************/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
/*******************************************************************/
/*                            Funciones                            */
/*******************************************************************/
float valid_float(float,float,char[]);
int valid_int(int,int,char[]);
long valid_long(int,int,char[]);
float valid_float_no0(float,float,char[]);
void valid_char(char[],char[]);
void menu(void);
long facto(int);
float trapecio();
float trap_res(float,float,float);
void f_general_datos(float[]);
void f_general_calculo(float,float,float,float[]);
void copiar_cadena (char[],char[]);
void cadenas();
void cadena_mayus(char[]);
void cadena_reversa(char[],char[]);
/*******************************************************************/
/*                            M  A  I  N                           */
/*******************************************************************/
int main()
{
	menu();
    return 0;
}
/*******************************************************************/
/*                            M   E   N   U                        */
/*******************************************************************/
void menu()
{
	long resul;
	float res2,res[3],formula[4];
	int op,num;
    do{
        system("cls");
		printf("       M       E       N       U");
            printf("\n 1) Factorial de un numero");
            printf("\n 2) Area de un trapecio");
            printf("\n 3) Formula general");
            printf("\n 4) Oracion convertida a mayusculas");
            printf("\n 5) Salir");
        op=valid_int(1,5,"\n  Escoje una opcion \n  ");
        switch(op)
          {
            case 1:
            	srand(time(NULL));
				num=1+rand()%11;
            	resul=facto(num);
            	printf(" El facotrial del numero %ld es: \n    %ld \n",num,resul);
            	break;
            case 2:
            	res2=trapecio();
            	printf(" El area del trapecio es %.2f  \n ",res2);
            	break;
            case 3:
            	f_general_datos(res);
				printf(" Resultados: \n X1 = %.2f + %.2fi",res[0],res[2]);
				printf(" \n X2 = %.2f - %.2fi\n  ",res[1],res[2]);
            	break;
            case 4:
            	cadenas();
            	break;
            case 5:
                op=6;
          }
        system("pause");
      }while(op!=6);
}
/*******************************************************************/
/*                         Funcion factorial                       */
/*******************************************************************/
long facto(int num)
{
    long j,fact;
    if(num>1)
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
	return fact;
}
/*******************************************************************/
/*                           Funcion Trapecio                       */
/*******************************************************************/
float trapecio()
{
	float a,b,altura,menor,mayor,resl;
	menor=(3.2*(pow(10,-38)));
	mayor=(3.2*(pow(10,38)));
	a=valid_float(menor,mayor,"Dame la base menor \n   ");
	b=valid_float(a,mayor,"Dame la base mayor, (debera medir mas que la menor) \n   ");
	altura=valid_float(menor,mayor,"La altura del trapecio\n   ");
	return (altura*((a+b)/2));
}
/******************************************************************/
/*       Funcion para la resolucion de la formula general         */
/******************************************************************/
void f_general_datos(float res[3])
{
	float x2,x,cons,menor,mayor;
	menor=-(3.2*(pow(10,38)));
	mayor=(3.2*(pow(10,38)));
	do{
		x2=valid_float(menor,mayor,"Ofrece el valor de x al cuadrado (a)\n   ");
	  }while(x2==0);
	x=valid_float(menor,mayor,"Ofrece el valor de x (b)\n   ");
	cons=valid_float(menor,mayor,"Ofrece el valor de la constante (c)\n   ");
	f_general_calculo(x2,x,cons,res);
}
void f_general_calculo(float x2,float x,float cons,float res[3] )
{
	float raiz,denomi,imagi,real,real2;
	raiz=(pow(x,2))-(4*x2*cons);
	denomi=2*x2;
	real=-x/denomi;	
	if(raiz<0)
	  {
		imagi=(sqrt(-raiz))/denomi;
	  }
	  else
	  {
		real2=(sqrt(raiz))/denomi;
	  }
	res[0]=real+real2;
	res[1]=real-real2;
	res[2]=imagi;
}
/******************************************************************/
/*               Validaciones para los numeros                    */
/******************************************************************/
int valid_int(int inf,int sup,char pregunta[30])
{
    int num;
    char cadena[10];
    do{
        printf("%s",pregunta);
        fflush(stdin);
        gets(cadena);
        num=atoi(cadena);
      }while( num<inf && sup<num);
    return num;
}
float valid_float (float inf, float sup, char pregunta[30])
{
    float num;
    char cadena[30];
    do{
        printf("%s",pregunta);
        fflush(stdin);
        gets(cadena);
        num=atol(cadena);
      }while(num<inf && sup<num);
    return num;
}
long valid_long(int inf,int sup,char pregunta[30])
{
    long num;
    char cadena[30];
    do{
        printf("%s",pregunta);
        fflush(stdin);
        gets(cadena);
        num=atof(cadena);
      }while(num<inf && sup<num);
    return num;
}
void valid_char(char cadena[30],char pregunta[])
{
    int i,n;
    do{
        printf("%s%c )\n ",pregunta,164);
        fflush(stdin);
        gets(cadena);
        n=longitud_char(cadena);
        for(i=0 ; i<n ; i++ )
          {
			if((cadena[i]<'a' || cadena[i]>'z') && cadena[i]!=' ') 
			  {
				if((cadena[i]<'A' || cadena[i]>'Z') && cadena[i]!=' ')
				  {
				  	i=50;
				  }
			  }
		  }
      }while(i!=n);
}
/******************************************************************/
/*                    Funciones para las cadenas                  */
/******************************************************************/
void cadenas()
{
	char cadena[30],cadena_ma[30];
	int n;
	valid_char(cadena,"  Dame una oracion (sin numeros, ni la leta ");
    copiar_cadena(cadena,cadena_ma);
    cadena_mayus(cadena_ma);
    printf(" La cadena en mayusculas estaria asi: \n  %s \n",cadena_ma);
    cadena_mayus(cadena);
    cadena_reversa(cadena,cadena_ma);
    n=cadena_igual(cadena,cadena_ma);
	if( n==1 )
      {
      	printf("  Esta cadena si es palindromo \n");
	  }
	  else
	  {
	  	printf("  Esta cadena no es palindromo \n");
	  }
}
int longitud_char (char cadena[30])
{
	int i;
	for(i=1 ; cadena[i]!='\0' ; i++);
	return i;
}
void copiar_cadena(char cadena[30],char cadena_2[30])
{
	int i,n,j;
	n=longitud_char(cadena);
	for(i=0 ; i<=n ; i++)
	  {
		cadena_2[i]=cadena[i];
	  }
}
void cadena_reversa(char cadena[30],char cadena_2[30])
{
	int i,n,j;
	n=longitud_char(cadena);
	for(i=0,j=n-1 ; i<n ; i++, j-- )
	  {
		cadena_2[i]=cadena[j];
	  }  
}
int cadena_igual(char cadena[30],char cadena_2[30])
{
	int i=0,n,j=0;
	n=longitud_char(cadena);
	do{
		if(cadena[j]!=' ')
		  {
		  	if(cadena_2[i]!=' ')
		  	  {
		  	  	if(cadena_2[i]==cadena[j])
		  	  	  {
		  	  	  	i++;
		  	  	  	j++;
				  }
				  else
				  {
				  	return 0;
				  }
			  }
			  else
			  {
			  	i++;
			  }
		  }
		  else
		  {
		  	j++;
		  }
	  }while(i<n);
	  return 1;
}
void cadena_mayus(char cadena[30])
{
	int i,n;
	n=longitud_char(cadena);
	for(i=0 ; i<n ; i++)
	  {
	  	if(cadena[i]>='a' && cadena[i] <= 'z')
	  	  {
	  		cadena[i]-=32;
		  }
	  }
}
