/*
 * funciones.c
 *
 *  Created on: 16 abr. 2022
 *      Author: mathi
 */

#include <stdio.h>
#include <stdlib.h>

//Desarrollo de las funciones

/*
	Esta funcion se encarga de calcular todos los precios de los vuelos de ambas aerolineas a traves de los distintos metodos de pago
*/
void calcularPrecios(int precioLatam, int precioAerolineas, int kilometros, float* descuentoDebitoLatam, float* descuentoDebitoAerolineas, float* descuentoCreditoLatam, float* descuentoCreditoAerolineas, float* valorBitcoinLatam, float* valorBitcoinAerolineas, float* precioUnitarioLatam, float* precioUnitarioAerolineas, int* diferenciaPrecio)
{
	float bitcoin = 4606954.55;

	if(precioLatam > 0 && precioAerolineas > 0 && kilometros > 0 && precioLatam > kilometros && precioAerolineas > kilometros)
	{
		if(precioLatam > precioAerolineas)
			{
				*diferenciaPrecio = precioLatam - precioAerolineas;
			}
			else
			{
				*diferenciaPrecio = precioAerolineas - precioLatam;
			}

			*descuentoDebitoLatam = precioLatam - (precioLatam *10/100);
			*descuentoDebitoAerolineas = precioAerolineas - (precioAerolineas *10/100);

			*descuentoCreditoLatam = precioLatam + (precioLatam *25/100);
			*descuentoCreditoAerolineas = precioAerolineas + (precioAerolineas *25/100);

			*valorBitcoinLatam = precioLatam / bitcoin;
			*valorBitcoinAerolineas = precioAerolineas / bitcoin;

			*precioUnitarioLatam = precioLatam / kilometros;
			*precioUnitarioAerolineas = precioAerolineas / kilometros;
	}
	else
	{
		printf("Compruebe haber ingresado el precio de ambas aerolineas y la cantidad de kilometros correctamente \n");
	}
}

/*
	Esta funcion se encarga de mostrar todos los precios de los vuelos de ambas aerolineas a traves de los distintos metodos de pago
*/
void mostrarPrecios(int precioLatam, int precioAerolineas, int kilometros, float* descuentoDebitoLatam, float* descuentoDebitoAerolineas, float* descuentoCreditoLatam, float* descuentoCreditoAerolineas, float* valorBitcoinLatam, float* valorBitcoinAerolineas, float* precioUnitarioLatam, float* precioUnitarioAerolineas, int* diferenciaPrecio)
{
	if(precioAerolineas > 0)
	{
		printf("\nKMs ingresados: %d km\n"
				   "\nPrecio Aerolineas: $%d \n"
				   "a) Precio con tarjeta de debito: $%f \n"
				   "b) Precio con tarjeta de credito: $%f \n"
				   "c) Precio pagando con bitcoin: %f BTC\n"
				   "d) Precio unitario: $%f \n", kilometros, precioAerolineas, *descuentoDebitoAerolineas, *descuentoCreditoAerolineas, *valorBitcoinAerolineas, *precioUnitarioAerolineas);
	}
	else
	{
		printf("Compruebe haber ingresado el precio de Aerolineas correctamente \n");
	}

	if(precioLatam > 0)
	{
		printf("\nPrecio Latam: $%d \n"
				   "a) Precio con tarjeta de debito: $%f \n"
				   "b) Precio con tarjeta de credito: $%f \n"
				   "c) Precio pagando con bitcoin: %f BTC\n"
				   "d) Precio unitario: $%f \n", precioLatam, *descuentoDebitoLatam, *descuentoCreditoLatam, *valorBitcoinLatam, *precioUnitarioLatam);
	}
	else
	{
		printf("Compruebe haber ingresado el precio de Latam correctamente \n");
	}

	if(*diferenciaPrecio > 0)
	{
		printf("\nLa diferencia de precio es: $%d \n", *diferenciaPrecio);
	}
	else
	{
		printf("El valor es el mismo en ambas aerolineas \n");
	}

}
