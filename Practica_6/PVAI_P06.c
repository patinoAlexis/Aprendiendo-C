//PVAI_P06
//Programa con funciones para crear vectores con valores aleatorios e imprimir vectores y matrices
//Alexis Ivan Patiño Victoria
//25/09/2019
  /***************************************************************************/
 /*								Librerias									*/
/***************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
  /***************************************************************************/
 /*							Declaracion de funciones						*/
/***************************************************************************/
int valid_int(int,int,char[]);
void principal();
void vector_AleaNoRep(int,int,int[],int);
void vector_alea(int,int,int[],int);
void imprimir_vec(int vector[], int);
void imprimir_matriz(int[][4],int );
void VectorMatriz(int[][4],int[],int);
void problema2(int[]);
void imprimir_vec_ParImpar(int [],int);
  /***************************************************************************/
 /*									MAIN									*/
/***************************************************************************/
int main()
{
	principal();
	return 0;
}
  /***************************************************************************/
 /*							Funcion principal								*/
/***************************************************************************/
void principal()
{
	int op,vector[25],matriz[4][4];
	srand(time(NULL));
    system("cls");
		printf("       M       E       N       U");
        printf("\n 1) Vector con numeros del 10-35 que te diga si son pares ");
        printf("\n 2) Vector con numeros del 50-80 que no se repitan");
        printf("\n 3) Matriz 4x4 del 1 al 16 con numeros no repetidos");
    op=valid_int(1,3,"\n  Escoje una opcion \n  ");
    switch(op)
      {
        case 1:
			vector_alea(10,35,vector,20);
       	 	imprimir_vec_ParImpar(vector,20);
           	break;
        case 2:
			problema2(vector);
            break;
        case 3:
			vector_AleaNoRep(1,16,vector,16);
			VectorMatriz(matriz,vector,4);
			imprimir_matriz(matriz,4);
            break;
      }
}
  /***************************************************************************/
 /*								Numeros aleatorios							*/
/***************************************************************************/
void problema2(int vector[])
{
	int repe;
	do{	
		vector_AleaNoRep(50,80,vector,20);
		imprimir_vec(vector,20);
		repe=valid_int(1,2,"\n\tQuieres volver a repetirlo?\n\t1)SI\n\t2)NO\n");
	}while(repe==1);
}
void vector_alea(int inf,int sup,int vector[],int tam)
{
	int i,h,par,impar;
	srand(time(NULL));
	h=(sup-inf)+1;
	for(i=0 ; i<tam ; i++)
	  {
		vector[i]= inf+rand()%h;
	  }
}
void imprimir_vec(int vector[], int tam)
{
	int i;
	for(i=0 ; i<tam ; i++)
	  {
		printf("\n\t Numero %2d: \t%2d",i+1,vector[i]);	
	  }		
}
void imprimir_vec_ParImpar(int vector[], int tam)
{
	int i,par, impar;
	for(i=0 ; i<tam ; i++)
	  {
		printf("\n\t Numero %2d:\t%2d",i+1,vector[i]);
		
		if((vector[i]%2)==1)
		  {
			printf("\tEs par\n");
			par++;
		  }
		  else
		  {
		  	printf("\tEs impar\n");
		  	impar++;
		  }
		  
	  }
	  
	printf("\n\tTienes %2d numeros pares",par);
	printf("\n\tTienes %2d numeros impares",impar);
}
void vector_AleaNoRep(int inf,int sup,int vector[],int tam)
{
	int i,h,j,igual=0;
	srand(time(NULL));
	h=sup-inf+1;
	for (i=0 ; i<tam ; i++)
	  {
		vector[i]=inf+rand()%h;
		for(j=0 ; j<i ; j++)
		  {
			if(vector[j]==vector[i])
			  {
			  	j=i;
			  	i--;
			  }
		  }
	  }
	vector[i]='\0';
}
void VectorMatriz(int matriz[][4],int vector[],int tam)
{
	int i,j,k=0;
	for(i=0 ; i<tam ; i++)
	  {
		for(j=0 ; j<tam ; j++)
		  {
			matriz[i][j]=vector[k];
			k++;
		  }
 	  }
 	matriz[i][j]='\0';
}
void imprimir_matriz(int matriz[][4],int tam)
{
	int i,j;
	printf("\t\tMATRIZ\n");
	for (i=0 ; i<tam; i++ )
	  {
		for(j=0 ; j<tam ; j++)
		  {
			printf("\t%3d",matriz[i][j]);
		  }
		printf("\n");	
	  }
}
  /*******************************************************************************/
 /*								Validaciones				 					*/
/*******************************************************************************/
int valid_int(int inf,int sup,char pregunta[30])
{
    int num;
    char cadena[15];
    do{
        printf("%s",pregunta);
        fflush(stdin);
        gets(cadena);
        num=atoi(cadena);
      }while( num<inf || sup<num);
    return num;
}
