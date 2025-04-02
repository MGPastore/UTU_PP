#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
/*
int valor ;
int n = 3;
int suma = 0;
int i = 0;
while(i<n ){

 scanf("%d",&valor);
 if (valor>0){
    suma += valor;
 }
 else {
    i++;
 }
 printf("suma %d", suma);
 printf("I %d", i);
 printf("Valor %d", valor);
}

*/ 


    /*int x;
    int suma = 0;
    scanf("%d",&x);
    while (x >= 0){
        suma += x;
        scanf("%d",&x);

    }
        printf("%d",suma);

*/

/*
int suma = 0;
int i = 3;
while (i<=7){
suma += i;
i += 2;


}
printf("\n");
printf("%d,%d",i,suma );
*/
   /* int x = 10;
    printf("\n");
    while (x>0) {
        x -= 3;
        printf("%d ", x); // Agregamos un espacio para mejorar la legibilidad
        printf("\n");

    }
*/








/*
int numero ;
scanf("%d",&numero);

 for ( int i=1; i<=numero; i++){
 	for ( int j=1; j<=i; j++){
		printf("x ");

}
printf("\n");
}

 for ( int i=1; i<=numero; i++){
 	for ( int j=1; j<i; j++){
		printf("  ");

}

 	for ( int j=numero; j>=i; j--){

		printf("O ");


}
printf("\n");
}
*/


/////////////////////////////////////////////////////VERIFICAR
/*
int numero ;
printf("INGRESAR NUMERO ");
scanf ("%d",&numero);
int ultimo = 1;
int penultimo = 1;
 for ( int i=2; i<=numero; i++){
int aux = ultimo;
ultimo += penultimo;
penultimo = aux ;
}

printf("El termino de %d de la sucesion de Fibonacci es = %d",numero,ultimo);
*/
////////////////////////////////////////////////////////////////////

/*
int numero;
int potencia;
int total = 1;

printf("INGRESAR NUMERO BASE");
scanf("%d", &numero);

printf("INGRESAR NUMERO POTENCIA");
scanf("%d", &potencia);


for (int i = 0; i < potencia; i++) {
	total = total *numero;
	
	

	
}
printf("El numero base es  : %d\n",numero);
printf("El numero exponencial es  : %d\n",potencia);
printf("El total es : %d\n",total);		
*/


//////////////////////////////////////////////////////////////////////
  /*int day = 1;
  switch (day) {
 	case 0:
   		printf("Lunes");
    	break;

  	case 1:
		printf("Martes");
    	break;

	case 2:
		printf("Miercoles");
    	break;

	case 3:
		printf("Jueves");
	break;

  	case 4:
		printf("Viernes");
	break;

	case 5:
		printf("Sabado");
	break;

	case 6:
		printf("Domingo");
	break;
  }

*/
  return 0;
}
