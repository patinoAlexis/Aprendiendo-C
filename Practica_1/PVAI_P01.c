//PVAI_P01
//Se desplega un menu repetitivo el cual te llevara a diferentes soluciones de problemas, pero para resolver estos problemas seran llamados diferentes funciones
//Fecha: 21/08/19
//Alexis Ivan Patino Victoria
#include <stdio.h>
#include <stdlib.h>
void llamada();
void cali_v();
void cali_o();
void agua();
void semana();

int main()
{
    int menu;
    do
    {
    	system("cls");
	    printf(" 1) Llamada telefonica \n 2) calificaciones x Verdadero \n 3) Calificaciones Optimizado");
	    printf(" \n 4) Agua \n 5) Salario\n 6) Salir \n ");
	    scanf("%d",&menu);
	    switch(menu)
	    {
	        case 1:
				llamada();
	            break;
	        case 2:
	            cali_v();
	            break;
	        case 3:
	        	cali_o();
				break;
			case 4:
				agua();
				break;
			case 5:
				semana();
				break;
			case 6:
				menu=6;
				break;	
    	}
    	getch();
    }
	while(menu!=6);
    getch();
}
/********************
// Funcion de llamada
********************/
void llamada()
{
    
	int gasto,llama,min;
    float iva,total;
	printf(" Que tipo de llamada acaba de realizar? \n 1) local \n 2)nacional \n 3)internacional  \n ");
	scanf("%i",&llama);
	printf(" Cuantos minutos duro la llamada? \n ");
	scanf("%i",&min);
	if(llama==1)
      {
        gasto=3;
      }
    if(llama==2)
      {
    	gasto=7;
   	 	if(min>3)
      	  {
    		gasto=((min-3)*2)+gasto;
     	  }
      }
    if(llama==3)
      {
        gasto=9;
        if(min>2)
          {
            gasto=((min-2)*4)+gasto;
     	  }
      }
    iva=gasto*0.08;
    total=iva+gasto;
    printf(" El gasto subtotal por la llamada es de %d \n El iva del 8%c es del %.2f",gasto,37,iva);
    printf(" \n El gasto total por la llamada es de %.2f",total);
}
/*************************************
// Funcion de calificacion x verdadero
**************************************/
void cali_v()
{
	float cali1,cali2,cali3,prom;
	printf(" Primera calificacion del Alumno ");
	scanf("%f",&cali1); 
    printf(" Segunda calificacion del Alumno ");
    scanf("%f",&cali2);
    printf(" Tercera calificacion del Alumno ");
	scanf("%f",&cali3);
	prom=(cali1+cali2+cali3)/3;
    if(prom>=30)
      {
        if(prom>=60)
          {
            if(prom>=70)
              {
              	if(prom>=80)
              	  {
              	  	if(prom>=90)
              	  	  {
              	  	  	if(prom>=98)
              	  	  	  {
              	  	  	    if(prom>100)
              	  	  	  	  {
              	  	  	  	    printf(" Error al calcular tu promedio");
							  }
							  else
							  {
							  	printf(" Tu calificacion es excelente");
							  }
						  }
					  	  else
					      {
					      	printf(" Tu calificacion es %.2f, la cual es una calificacion muy buena",prom);
						  }
								
					  }
					  else
					  {
					  	printf(" Tu calificacion es %.2f lo cual es buena",prom);
					  }
				  }
				  else
				  {
				  	printf(" Tu calificacion es %.2f lo cual es regular",prom);
				  }
			  } 
			  else
			  {
			  	printf(" Tu calificacion es %.2f lo que es suficiente para pasar el curso",prom);
			  }
		  }
		  else
		  {
		  	printf(" Tu calificacion es %.2f y tienes derecho a hacer extraordinario",prom);
		  }
	  }
	  else
	  {
		printf(" Tu calificacion es %.2f y tienes que recursar la materia",prom);
	  }
}
/************************************
// Funcion de calificacion optimizada
************************************/
void cali_o()
{
	float cali1,cali2,cali3,prom;
	printf(" Primera calificacion del Alumno ");
	scanf("%f",&cali1);
    printf(" Segunda calificacion del Alumno ");
    scanf("%f",&cali2);
    printf(" Tercera calificacion del Alumno ");
	scanf("%f",&cali3);
	prom=(cali1+cali2+cali3)/3;
    if(prom>=80)
      {
      	if(prom>=98)
          {
        	if(prom>100)
        	  {
       		  	printf(" Error al calcular el promedio");
			  }
			  else
			  {
			  	printf(" Tu calificacion es %.2f y es una calificacion excelente",prom);
			  }
		  }
		  else
		  {
		  	if(prom>=90)
		  	  {
		  	  	printf(" Tu calificacion es %.2f y es una calificacion muy buena",prom);
			  }
			  else
			  {
			  	printf(" Tu calificacion es %.2f y es una calificacion buena",prom);
			  }
		  }
	  }
	  else
	  {
	  	if(prom>=60)
	  	  {
	  	  	if(prom>=70)
	  	  	  {
	  	  	  	printf(" Tu calificacion es %.2f y es una calificacion regular",prom);
			  }
			  else
			  {
			  	printf(" Tu calificacion es %.2f y es lo suficiente para pasar la materia",prom);
			  }
		  }
		  else
		  {
		  	if(prom>=30)
		  	  {
		  	  	printf(" Tu calificacion es %.2f y tendras que hacer extraordinario",prom);				  	  	
			  }
			  else
			  {
			  	printf(" Tu calificacion es %.2f y tendras que repetir la materia",prom);
			  }
		  }
	  }
}
/*********************************
// Funcion del pago por m3 de agua
**********************************/ 
void agua()
{
	int metros,gasto;
	float iva, total;
	printf(" Porfavor indique cuanta agua consumio durante este mes en metros cubicos ");
	scanf("%d",&metros);
	if(metros>=5)
	  {
		if(metros>=16)
	  	  {
	  	  	if(metros>=51)
	  	  	  {
	  	  	  	gasto=metros*11;
			  }
			  else
			  {
			  	gasto=metros*10;
			  }
	  	  }
	  	  else
	  	  {
	  	  	gasto=metros*8;
		  }
	  }
	  else
	  {
	  	gasto=50;
	  } 
	iva=gasto*0.08;
	total=iva+gasto;
	printf(" El costo por los %d metros cubicos es del %d y el iva que son %.2f ",metros,gasto,iva);
	printf (" \n Lo que daria un total de %.2f pesos ",total);
}
/***************************
// Salario de un trabajador
***************************/
void semana()
{
	int horas, salario,pago_e=0,pago_t,pago_n;
	printf(" Cuanto es el salario por hora? ");
	scanf("%d",&salario);
	printf(" Cuantas horas trabajo esta semana? ");
	scanf("%d",&horas);
	if(horas<=40)
	  {
	  	pago_n=horas*salario;
	  }
	  else
	  {
	  	if(horas<=49)
	  	  {
			pago_n=salario*40;
			pago_e=(salario*2)*(horas-40);
		  }
		  else
		  {
		  	pago_n=salario*40;
		  	pago_e=((salario*2)*9)+((salario*3)*(horas-49));
		  }
	  }
	pago_t=pago_n+pago_e;
	printf(" \n Su salario normal es de: %i \n Su salario extra es del %i \n Su salario total es %i ",pago_n,pago_e,pago_t);
}
