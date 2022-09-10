/*
 * operaciones.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Lenovo
 */

int sumar (int numeroUno, int numeroDos, int *resultado)
{
	*resultado = numeroUno + numeroDos;

	return  0;
}

int dividir (int dividendo, int divisor, float *resultado)
{
	int retorno;

	if(divisor != 0)
	{
		retorno = 0;

		*resultado = (float) dividendo / divisor;
	}

	return retorno ;
}
