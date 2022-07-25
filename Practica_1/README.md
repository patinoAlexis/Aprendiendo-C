# Aprendiendo a programar en C
## Practica 1 - Descripción:
Se tiene un menu con las siguientes opciones
1 Llamada Telefonica
2 Calificaciones x verdadero
3 Calificaciones optimizado
4 Agua
5 Salario
6 Salir

### 1 Llamada Telefonica
Esta opción servirá para desplegar el Total de una llamada telefónica
donde se pide como datos de entrada los minutos y el tipo de llamada, se
cobra de la siguiente manera:
1. Llamada Local $3.00 sin límite de tiempo
2. Llamada Nacional $7.00 por los 3 primeros minutos y $2.00 minuto adicional
3. Llamada Internacional $9.00 por los 2 primeros minutos y $4.00 minuto adicional
Desplegar, Subtotal, Iva (8%), Total.

**Ejemplo:**

![Ejecucion de la primera opcion](https://raw.githubusercontent.com/patinoAlexis/Aprendiendo-C/main/Practica_1/img/img_res_op1.png)
### 2 Calificaciones x Verdadero
Esta opción va a leer 3 calificaciones, y calculara el promedio del alumno y
desplegara:
Si prom < 30 Repetir
Si prom >=30 y prom <60 extraordinario
Si prom >=60 y prom <70 suficiente
Si prom >=70 y prom <80 Regular
Si prom >=80 y prom <90 bien
Si prom >=90 y prom <98 muy bien
Si prom >=98 y prom <=100 excelente
Si prom >100 Error en promedio
**Nota**: Esta opción solo usara puro IF para conseguir su resultado

**Ejemplo:**

![Ejecucion de la segunda opcion](https://raw.githubusercontent.com/patinoAlexis/Aprendiendo-C/main/Practica_1/img/img_res_op2.png)
### 3 Calificaciones optimizado
Esta función va a leer 3 calificaciones calcule el promedio del alumno y
desplegara:
Si prom < 30 Repetir
Si prom >=30 y prom <60 extraordinario
Si prom >=60 y prom <70 suficiente
Si prom >=70 y prom <80 Regular
Si prom >=80 y prom <90 bien
Si prom >=90 y prom <98 muy bien
Si prom >=98 y prom <=100 excelente
Si prom >100 Error en promedio
**Nota**: Esta opción solo usara IF y ELSE para conseguir su resultado

**Ejemplo:**

![Ejecucion de la tercera opcion](https://raw.githubusercontent.com/patinoAlexis/Aprendiendo-C/main/Practica_1/img/img_res_op3.png)
### 4 Agua
Esta opción nos servirá para calcular el Total a pagar por consumo de
agua, donde el dato de entrada son los M3 de agua consumidos, Tomar en
cuenta que se cobra escalonada de la
Siguiente manera:
Rango1: 0 al 4 M3 $50 x facturación sin importar cuánto consumió en
este rango
Rango2: 5 a 15 M3 $8.00 x M3
Rango3: 16 a 50 M3 $10.00 x M3
Rango4: 51 M3 en adelante $11.00 x M3

**Ejemplo:**

![Ejecucion de la cuarta opcion](https://raw.githubusercontent.com/patinoAlexis/Aprendiendo-C/main/Practica_1/img/img_res_op4.png)
### 5 Salario
Dentro del salario estará un algoritmo que sirva para calcular el salario semanal de un trabajador
donde se obtiene como dato de entrada las horas semanales trabajadas, el salario por hora. El
programa deberá calcular el salario normal, salario extra y salario total, considerando lo siguiente:
Jornada Normal de 40 horas.
El salario normal se considera las horas trabajadas menores o igual a la jornada normal
salario extra se considera las horas trabajadas mayores a la
jornada normal y se pagan dobles las primeras 9 y triples a partir de la
décima hora extra

**Ejemplo:**

![Ejecucion de la quinta opcion](https://raw.githubusercontent.com/patinoAlexis/Aprendiendo-C/main/Practica_1/img/img_res_op5.png)

### 6 Salir
Esta opcion permitirá terminar la ejecución de nuestro programa y poder salir de este.

**Ejemplo:**

![Ejecucion de la sexta opcion](https://raw.githubusercontent.com/patinoAlexis/Aprendiendo-C/main/Practica_1/img/img_res_op6.png)