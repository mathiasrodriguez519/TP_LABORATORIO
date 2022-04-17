/*
 ============================================================================
 Name        : tp_laboratorio_1.c
 Author      : Mathias Rodriguez DIV D
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"//Biblioteca con las funciones usadas

int main(void)
{
	setbuf(stdout, NULL);

	int opcionMenu;
	int kilometros = 0;
	int precioVueloAerolineas = 0;
	int precioVueloLatam = 0;
	float debitoLatam;
	float debitoAerolineas;
	float creditoLatam;
	float creditoAerolineas;
	float valorBitcoinLatam;
	float valorBitcoinAerolineas;
	float precioUnitarioLatam;
	float precioUnitarioAerolineas;
	int diferenciaPrecio;

	do
	{
		printf("1. Ingresar Kilometros: (km : %d)\n"
			   "2. Ingresar precio de vuelos: (Aerolineas: %d, Latam: %d)\n"
			   "3. Calcular todos los costos: \n"
			   "4. Informar resultados. \n"
	   		   "5. Carga forzada de datos \n"
			   "6. Salir\n"
			   "Ingrese el numero de opcion que desea: ", kilometros, precioVueloAerolineas, precioVueloLatam);
		fflush(stdin);
		scanf("%d", &opcionMenu);
		switch(opcionMenu)
		{
		case 1: //Esta opcion permite ingresar los kilometros
			printf("Ingresar Kilometros: ");
			fflush(stdin);
			scanf("%d", &kilometros);
			break;

		case 2: //Esta opcion permite ingresar el precio de ambas aerolineas
			printf("Precio vuelo Aerolineas: ");
			fflush(stdin);
			scanf("%d", &precioVueloAerolineas);
			printf("Precio vuelo Latam: ");
			fflush(stdin);
			scanf("%d", &precioVueloLatam);
			break;
		case 3: //Esta opcion calcula todos los precios
			calcularPrecios(precioVueloLatam, precioVueloAerolineas, kilometros, &debitoLatam, &debitoAerolineas, &creditoLatam, &creditoAerolineas, &valorBitcoinLatam, &valorBitcoinAerolineas, &precioUnitarioLatam, &precioUnitarioAerolineas, &diferenciaPrecio);
			fflush(stdin);
			break;
		case 4: //Esta opcion muestra todos los resultados
			mostrarPrecios(precioVueloLatam, precioVueloAerolineas, kilometros, &debitoLatam, &debitoAerolineas, &creditoLatam, &creditoAerolineas, &valorBitcoinLatam, &valorBitcoinAerolineas, &precioUnitarioLatam, &precioUnitarioAerolineas, &diferenciaPrecio);
			fflush(stdin);
			break;
		case 5: //Esta opcion hace una carga forzada de datos
			kilometros = 7090;
			precioVueloLatam = 159339;
			precioVueloAerolineas = 162965;
			calcularPrecios(precioVueloLatam, precioVueloAerolineas, kilometros, &debitoLatam, &debitoAerolineas, &creditoLatam, &creditoAerolineas, &valorBitcoinLatam, &valorBitcoinAerolineas, &precioUnitarioLatam, &precioUnitarioAerolineas, &diferenciaPrecio);
			mostrarPrecios(precioVueloLatam, precioVueloAerolineas, kilometros, &debitoLatam, &debitoAerolineas, &creditoLatam, &creditoAerolineas, &valorBitcoinLatam, &valorBitcoinAerolineas, &precioUnitarioLatam, &precioUnitarioAerolineas, &diferenciaPrecio);
			fflush(stdin);
			break;
		default: //Al ingresar un numero distinto al de las opciones se ingresa otro numero o una letra para volver a este
			printf("Error, ingrese un numero o una letra para volver al menu: ");
			fflush(stdin);
			scanf("%d", &opcionMenu);
		}
	}while(opcionMenu != 6);

	return 0;
}
