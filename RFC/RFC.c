//RFC
//Programa que te hace tu rfc con los datos que se le dan
//Fecha: 23/09/19
//Alexis Ivan Patino Victoria
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

  /*******************************************************************************/
 /*								Declaracion de funciones						*/
/*******************************************************************************/
float valid_float(float,float,char[]);
int valid_int(int,int,char[]);
int dias_nacimiendo(int,int);
void valid_char(char[],char[],int);
void rfc(void);
void copiar_nombre(char[],char[]);
void cadena_mayus(char[],int);
void cadena_reversa(char[],char[],int);
void cadena_minu(char[],int);
void PrimerSegunda_letra(char[],char[]);
void nombre_letra(char[],char[]);
void anio_rfc(int,char[]);
void MesDia_rfc(int ,char[],int n);
void verificar_rfc(char[]);
  /*******************************************************************************/
 /*								M		A		I		N						*/
/*******************************************************************************/
int main()
{
	rfc();
	return 0;
}
  /*******************************************************************************/
 /*								Cuerpo Principal								*/
/*******************************************************************************/
void rfc()
{
	int anio,mes,dia,i;
	char nombres[30],ApellidoMat[30],ApellidoPa[30],rfc[30];
	
		valid_char(nombres,"\tNombres:\n",1);
		cadena_mayus(nombres,(strlen(nombres)));
		
		valid_char(ApellidoPa,"\tApellido Paterno:\n",2);
		cadena_mayus(ApellidoPa,(strlen(ApellidoPa)));
		
		valid_char(ApellidoMat,"\tApellido Materno:\n",2);
		cadena_mayus(ApellidoMat,(strlen(ApellidoMat)));
		
		anio=valid_int(1900,2019,"\tAnio de nacimiento\n\t");
	
		mes=valid_int(1,12,"\tMes de nacimiento\n\t");
	
		dia=dias_nacimiento(anio,mes);
		
	PrimerSegunda_letra(ApellidoPa,rfc);
	rfc[2]=ApellidoMat[0];
	nombre_letra(nombres,rfc);
	
	anio_rfc(anio,rfc);
	MesDia_rfc(mes,rfc,1);
	MesDia_rfc(dia,rfc,2);
	rfc[10]='\0';
	
	verificar_rfc(rfc);
	system("cls");
	printf("\n\tTu RFC es:\n\t\t%s",rfc);	
}
  /*******************************************************************************/
 /*							  Funciones para el programa						*/
/*******************************************************************************/
int dias_nacimiento(int anio, int mes)
{
	int dia;
	switch(mes)
	  {
	  	case 1:
	  	case 3:
		case 5:
	  	case 7:
	  	case 8:
	  	case 10:
	  	case 12:
	  		dia=valid_int(1,31,"\tDia de nacimiento:\n\t");
	  		break;
	  	case 2:
			dia=febrero_dias(anio);
			break;
		default:
			dia=valid_int(1,30,"\tDia de nacimiento:\n\t");
	  }
	return dia;
}
void verificar_rfc(char rfc[30])
{
	int i,j,k=0,n=0;
	char malas[30]="PUTO PENE PITO JOTO CACA MAMO",probar[4],cadena[4];
	for(i=0 ; i<=3 ; i++)
	{
		cadena[i]=rfc[i];
	}
	cadena[i]='\0';
	do{
		for(i=0 ; malas[k]!=' ' ; i++,k++)
		  {
			probar[i]=malas[k];
		  }
		k++;
		j=cadena_igual(probar,cadena);
		n++;
	}while(j==0 && n<=6);
	if(j==1)
	{
		rfc[3]='X';
	}
}
int febrero_dias(int a)
{
	int d;
	if(a%4==0)
	  {
	  	d=valid_int(1,29,"\tDia de nacimiento:\n\t");
	  }
	  else
	  {
	  	d=valid_int(1,28,"\tDia de nacimiento:\n\t");
	  }
	return d;
}
void PrimerSegunda_letra(char cadena[30],char rfc[20])
{
	int i=1,n,j=0;
	rfc[0]=cadena[0];
	n=strlen(cadena);
	do{	
		if(cadena[i]>'A' && cadena[i]<='Z')
	      {    
		   	if(cadena[i]!='E')
		      {
		      	if(cadena[i]!='I')
		     	  {
		      		if(cadena[i]!='O')
		      	  	  {
		      	  		if(cadena[i]!='U')
		  	  	      	  {
		   	  	  			i++;
					  	  }
					  	  else
					  	  {
					  	  	rfc[1]=cadena[i];
					  	  	j=1;
						  }
				  	  }
				  	  else
				  	  {
				  	  	rfc[1]=cadena[i];
				  	  	j=1;
					  }
			  	  }
			  	  else
			  	  {
			  	  	rfc[1]=cadena[i];
			  	  	j=1;
				  }
		  	  }
		  	  else
		  	  {
		  	  	rfc[1]=cadena[i];
		  	  	j=1;
			  }
		  }
		  else
		  {
		  	if(cadena[i]==-91)
		  	  {
		    	i++;
		  	  }
		  	  else
		  	  {
		  	  	rfc[1]=cadena[i];
		  	  	j=1;
			  }
		  }
	  }while(i<=n &&  j!=1);
	if(cadena[i]=='\0')
	  {
		rfc[1]=cadena[1];
	  }
}
void nombre_letra(char cadena[30],char rfc[20])
{
	int j,i,h,espa,intera=0,num,k=0; 
	char cadena_2[30],comprobar[7];
	copiar_nombre("JOSE",comprobar);
	espa=contar_espacios(cadena);
	do{	
		for(i=0 ; (cadena[k]!=' ' && cadena[k]!='\0') ; i++,k++)
		  {
			cadena_2[i]=cadena[k];
		  }
		cadena_2[i]='\0';
		k++;
		h=0;
		num=0;
		do{
		  	j=cadena_igual(cadena_2,comprobar);
			if(h>=1)
		   	  {
		   		if(h==2)
		  		  {
		  		  	copiar_nombre("MARIA",comprobar);
				  }
				  else
				  {
				  	copiar_nombre("CARLOS",comprobar);
				  } 
			  }
			  else
			  {
			  	copiar_nombre("JUAN",comprobar);
			  }
			if(j!=1)
			  {
			  	num++;
			  }
			h++;
		}while(h<4);
		intera++;
	}while(espa>=intera && num!=4);
	if(num==4)
	  {
		rfc[3]=cadena_2[0];
	  }
	  else
	  {
	  	rfc[3]=cadena[0];
	  }
}
void anio_rfc(int anio, char rfc[20])
{
	char anio_cad[10];
	itoa(anio,anio_cad,10);
	rfc[4]=anio_cad[2];
	rfc[5]=anio_cad[3];
}
void MesDia_rfc(int MesDia,char rfc[20],int n)
{
	int i;
	char MesDia_cad[10];
	if(n==1)
      {
		i=6;
	  }
	  else
	  {
	  	i=8;
	  }
	itoa(MesDia,MesDia_cad,10);
	switch(MesDia)
	  {
	  	case 1:
	  	case 2:
	  	case 3:
	  	case 4:
	  	case 5:
	  	case 6:
	  	case 7:
	  	case 8:
	  	case 9:
	  		rfc[i]='0';
	  		rfc[i+1]=MesDia_cad[0];
	  		break;
	  	default:
	  		rfc[i]=MesDia_cad[0];
	  		rfc[i+1]=MesDia_cad[1];
	  		break;
	  }
}
  /*******************************************************************************/
 /*								Funciones de cadenas							*/
/*******************************************************************************/
int contar_espacios(char cadena[30])
{
    int i,espa=0;
    for(i=0 ; cadena[i]!='\0' ; i++)
      {
        if(cadena[i]==' ')
          {
            espa++;
          }
      }
    return espa;
}
void copiar_nombre(char cadena[30],char cadena_2[30])
{
	int i,n;
	n=strlen(cadena);
	for(i=0 ; i<=n ; i++)
	  {
		cadena_2[i]=cadena[i];
	  }
	cadena_2[i]='\0';
}
void cadena_mayus(char cadena[30],int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	  {
	  	if(cadena[i]!=-92)
		  {
	 		if(cadena[i]>=97)
	  		  {
	  			if(cadena[i] <= 122)
	  		  	  {
	  		  	cadena[i]-=32;
			  	  }
		  	  }
	  	  }
	  	  else
	  	  {
			cadena[i]=-91;
		  }
	  }	  
}
int cadena_igual(char cadena[30],char cadena_2[30])
{
	int i,n;
	n=strlen(cadena);
	for(i=0 ; i<=n ; i++)
	  {	
		if(cadena_2[i]!=cadena[i])
		  {
			return 0;
		  }
	  }
	return 1;
}
  /*******************************************************************************/
 /*								Validaciones				 					*/
/*******************************************************************************/
int valid_int(int inf,int sup,char pregunta[30])
{
    int num;
    char cadena[30];
    do{
        printf("%s",pregunta);
        fflush(stdin);
        gets(cadena);
        num=atoi(cadena);
      }while( num<inf || sup<num);
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
void valid_char(char cadena[30],char pregunta[],int tipo)
{
	int i,n,j=0;
    do{
		printf("%s\n\t",pregunta);
        fflush(stdin);
        gets(cadena);
        n=strlen(cadena);
		if(cadena[0]!=' ')
          {
	        for(i=0 ; i<n ; i++ )
	          {
				if(((cadena[i]<97 || cadena[i]>122) &&  cadena[i]!=32) && cadena[i]!=-92)
				  {
					if(((cadena[i]<65 || cadena[i]>90) && cadena[i]!=32) && cadena[i]!=-91)
					  {
						  i=50;
					  }
					  else
					  {
					  	if(cadena[i]==32)
					  	  {
					  	  	if(tipo==1)
					  	  	  {
					  	  	  	j++;
							  }
							  else
							  {
							  	j=2;
							  }
						  }
						  else
						  {
						  	j=0;
						  }
					  }
				  }
				  else
				  {
				  	if(cadena[i]==32)
				  	  {
				  	  	if(tipo==1)
				  	  	  {
				  	  	  	j++;
						  }
						  else
						  {
						  	j=2;
						  }
					  }
					  else
					  {
					  	j=0;
					  }
				  }
				if(j==2)
				  {
				  	i=50;
				  }
			  }
		  }	  
      }while(i!=n);
}
