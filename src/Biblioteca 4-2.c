/*
 ============================================================================
Ejercicio 4-2: Realizar una función Suma que reciba como parámetros dos enteros (los que
va a sumar) y un puntero a entero que guardara el resultado de esta. La función retorna 1 si
pudo realizar la suma y cero en caso de no haberla podido realizar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "operaciones.h"

int main(void)
{
	setbuf(stdout, NULL);
	int numero1;
	int numero2;
	int suma;
	int resultado;
	float resultadoDividir;
	float division;

	printf("Ingrese el primer numero: ");
	scanf("%d", &numero1);

	printf("Ingrese el segundo numero: ");
	scanf("%d", &numero2);

	suma = sumar(numero1, numero2, &resultado);

	division = dividir (numero1, numero2, &resultadoDividir);

	if(suma == 0)
	{
		printf("\nLa suma de los dos numeros es: %d ", resultado);
	}

	if(division == 0)
	{
		printf("\nLa division de los dos numeros es: %.2f ", resultadoDividir);
	}
	else
	{
		printf("\nNo se pudo dividir");
	}

	return EXIT_SUCCESS;
}




