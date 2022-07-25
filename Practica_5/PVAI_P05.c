//PVAI_P05
//Programa que tiene las funciones de la libreria string.h
//Fecha: 14/09/19
//Alexis Ivan Patino Victoria
  /************************************************************/
 /*                        Librerias                         */
/************************************************************/
#include <stdio.h>
#include <stdlib.h>
  /************************************************************/
 /*                  Declaracion de funciones                */
/************************************************************/
int valid_int(int,int,char[]);
int consonante_char(char[]);
int vocales_char(char[]);
int especial_char(char[]);
int longitud_char(char[]);
void valid_char(char[],char[]);
void copiar_cadena (char[],char[]);
void cadena_mayus(char[],int);
void cadena_reversa(char[],char[],int);
void cadena_minu(char[],int);
void opcion_1();
void opcion_2();
void imprimir_12(char[],int);
void imprimir_34(char[],int);
void imprimir_56(char[],int);
void imprimir_78(char[],int);
void imprimir_9(char[]);
void imprimir_10(char[]);
void menu();
  /************************************************************/
 /*                M		A		I		N                */
/************************************************************/
int main()
{
    menu();
    return 0;
}
  /************************************************************/
 /*                M		E		N		U                */
/************************************************************/
void menu()
{
    int op;
    do{
	    system("cls");
		printf("\t\tM\t\tE\t\tN\t\tU");
	        printf("\n   1) Leer una cadena y desplegarla en su forma: ");
	        printf("\n   Original, en mayusculas, minusculas, alrevez, su cantidad de caracteres,");
	        printf("\n   cantidad de vocales, constantes y espacios o caracteres especiales");
	        printf("\n   2) Desplegar una cadena de diferentes formas ");
	        printf("\n   3) Salir \n");
	    op=valid_int(1,3,"   Escoje una de las opciones\n   ");
	    switch(op)
	      {
	        case 1:	
				opcion_1();
				break;
			case 2:
				opcion_2();
				break;
	      }
	    printf("\n   ");
	    system("pause");
	  }while(op!=3);
}
  /************************************************************/
 /*                          Opcion 1                        */
/************************************************************/
void opcion_1()
{
    char cadena[30], mayu[30],alrevez[30],minu[30];
    int carac,vocal,conso,espe;
        valid_char(cadena,"   Escribe tu cadena\n ");
        carac = longitud_char(cadena);
        copiar_cadena(cadena,mayu);
        cadena_mayus(mayu,carac);
        copiar_cadena(cadena,alrevez);
        cadena_reversa(alrevez,cadena,carac);
        copiar_cadena(cadena,minu);
        cadena_minu(minu,carac);
        vocal = vocales_char(mayu);
        conso = consonante_char(mayu);
        espe = carac-vocal-conso;
    system("cls");
    printf("\n    Cadena original: \n\t%s",cadena);
    printf("\n    Cadena mayusculas: \n\t%s",mayu);
    printf("\n    Cadena en minusculas: \n\t%s",minu);
    printf("\n    Cadena alrevez: \n\t%s",alrevez);
    printf("\n    Numero de caracteres: \n\t%d",carac);
    printf("\n    Numero de vocales: \n\t%d",vocal);
    printf("\n    Numero de consonantes: \n\t%d",conso);
    printf("\n    Numero de caracteres especiales: \n\t%d",espe);
}
int especial_char(char cadena[30])
{
    int i,espe=0;
    for(i=0 ; cadena[i]!='\0' ; i++)
      {
        if(cadena[i]<'a' || (cadena[i]>'z' && cadena[i]!='ñ'))
          {
            espe++;
          }
      }
    return espe;
}
int vocales_char(char cadena[30])
{
    int i,vocal=0;
    for(i=0 ; cadena[i]!='\0' ; i++)
      {
        if(cadena[i]=='A' || cadena[i]=='E')
          {
			vocal++;
          }
          else
          {
          	if(cadena[i]=='I' || cadena[i]=='O')
          	  {
          	  	vocal++;
			  }
			  else
			  {
			  	if(cadena[i]=='U')
			  	  {
			  	  	vocal++;
				  }
			  }
		  }
      } 
    return vocal;
}
int consonante_char(char cadena[30])
{
    int i,cons=0;
    for(i=0 ; cadena[i]!='\0' ; i++)
      {
		if((cadena[i]>'A' && cadena[i]<='Z') || cadena[i]=='Ñ' )
           {
			 if(cadena[i]!='A')
	          {
	          	if(cadena[i]!='E')
	          	  {
	          	  	if(cadena[i]!='I')
	          	  	  {
	          	  	  	if(cadena[i]!='O')
	          	  	  	  {
	          	  	  	  	if(cadena[i]!='U')
	          	  	  	  	  {
	          	  	  	  	  	cons++;
							  }
						  }
					  }
				  }
	          }
	      }
      }
    return cons;
}
void cadena_minu(char cadena[30],int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	  {
	  	if(cadena[i]>='A')
	  	  {
	  		if(cadena[i] <= 'Z')
	  		  {
	  		  	cadena[i]+=32;
			  }
		  }
		if(cadena[i]==165)
		  {
			cadena[i]=164;
		  }
	  }
}
  /************************************************************/
 /*                          Opcion 2                        */
/************************************************************/
void opcion_2()
{
    int n;
	char cadena[30],reversa[30];
        valid_char(cadena,"   Escribe tu cadena\n");
        n=longitud_char(cadena);
        cadena_mayus(cadena,n);
        copiar_cadena(cadena,reversa);
        cadena_reversa(reversa,cadena,n);
    system("cls");
    printf("   Salida 1:\n\t%s\n",cadena);
    printf("\n   Salida 2: \n\t%s\n",reversa);
    printf("\n   Salida 3: \n");
    imprimir_34(cadena,n);
    printf("   Salida 4: \n");
    imprimir_34(reversa,n);
    printf("   Salida 5: \n");
    imprimir_56(cadena,n);
    printf("   Salida 6: \n");
    imprimir_56(reversa,n);
    printf("   Salida 7: \n");
    imprimir_78(cadena,n);
    printf("   Salida 8: \n");
    imprimir_78(reversa,n);
    printf("   Salida 9: \n");
    imprimir_9(cadena);
    printf("\n   Salida 10: \n");
    imprimir_10(cadena);
}
void imprimir_34(char cadena[30],int n)
{
    int i;
    for(i=0 ; i<=n ; i++)
    {
        printf("\t%c\n",cadena[i]);
    }
}
void imprimir_56(char cadena[30],int n)
{
    int i=0,j,t;
    t=n;
    for(i=0 ; i<=n ; i++)
    {
        printf("\t");
		for(j=0 ; j<=t ; j++ )
        {
            printf("%c",cadena[j]);
        }
        t--;
        printf("\n");
    }
}
void imprimir_78(char cadena[30],int n)
{
    int i=0,j;
	for(i=0 ; i <= n ; i++)
	{
		printf("\t");
		for(j=i ; j<=n ; j++)
		  {
		  	printf("%c",cadena[j]);
		  }
		printf("\n");
	}
}
void imprimir_9(char cadena[30])
{
	int i;
    printf("\t");
	for(i=0 ; cadena[i]!='\0' ; i++)
      {
        if(cadena[i]=='A' || cadena[i]=='E')
          {
			printf("%c",cadena[i]);
          }
          else
          {
          	if(cadena[i]=='I' || cadena[i]=='O')
          	  {
          	  	printf("%c",cadena[i]);
			  }
			  else
			  {
			  	if(cadena[i]=='U')
			  	  {
			  	  	printf("%c",cadena[i]);
				  }
			  }
		  }
      }
}
void imprimir_10(char cadena[30])
{
	int i;
    printf("\t");
	for(i=0 ; cadena[i]!='\0' ; i++)
      {
         if(cadena[i]>'A' && cadena[i]<='Z')
           {
			 if((cadena[i]!='A'))
	          {
	          	if(cadena[i]!='E')
	          	  {
	          	  	if(cadena[i]!='I')
	          	  	  {
	          	  	  	if(cadena[i]!='O')
	          	  	  	  {
	          	  	  	  	if(cadena[i]!='U')
	          	  	  	  	  {
	          	  	  	  	  	printf("%c",cadena[i]);
							  }
						  }
					  }
				  }
	          }
	      }
	    if(cadena[i]=='Ñ')
	    {
	    	printf("%c",cadena[i]);
		}
      }
}
  /************************************************************/
 /*                          Funciones                       */
/************************************************************/
int valid_int(int inf,int sup,char pregunta[30])
{
    int num;
    char cadena[15];
    do{
        printf("%s",pregunta);
        fflush(stdin);
        gets(cadena);
        num=atoi(cadena);
      }while( num<inf && sup<num);
    return num;
}
void valid_char(char cadena[30],char pregunta[30])
{
    printf("%s   ",pregunta);
    fflush(stdin);
    gets(cadena);
}
int longitud_char (char cadena[30])
{
	int i;
	for(i=1 ; cadena[i]!='\0' ; i++);
	return i;
}

void copiar_cadena(char cadena[30],char cadena_2[30])
{
	int i,n;
	n=longitud_char(cadena);
	for(i=0 ; i<=n ; i++)
	  {
		cadena_2[i]=cadena[i];
	  }
	cadena_2[i]='\0';
}
void cadena_reversa(char cadena[30],char cadena_2[30],int n)
{
	int i,j;
	for(i=0,j=n-1 ; i<n ; i++, j-- )
	  {
		cadena[i]=cadena_2[j];
	  }
}
void cadena_mayus(char cadena[30],int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	  {
	  	if(cadena[i]>='a')
	  	  {
	  		if(cadena[i] <= 'z')
	  		  {
	  		  	cadena[i]-=32;
			  }
		  }
		if(cadena[i]=='ñ')
		  {
			cadena[i]='Ñ';
		  }
	  }
}
