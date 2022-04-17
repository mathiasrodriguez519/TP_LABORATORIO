/*
 * funciones.h
 *
 *  Created on: 16 abr. 2022
 *      Author: mathi
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

void calcularPrecios(int precioLatam, int precioAerolineas, int kilometros, float* descuentoDebitoLatam, float* descuentoDebitoAerolineas, float* descuentoCreditoLatam, float* descuentoCreditoAerolineas, float* valorBitcoinLatam, float* valorBitcoinAerolineas, float* precioUnitarioLatam, float* precioUnitarioAerolineas, int* diferenciaPrecio);
void mostrarPrecios(int precioLatam, int precioAerolineas, int kilometros, float* descuentoDebitoLatam, float* descuentoDebitoAerolineas, float* descuentoCreditoLatam, float* descuentoCreditoAerolineas, float* valorBitcoinLatam, float* valorBitcoinAerolineas, float* precioUnitarioLatam, float* precioUnitarioAerolineas, int* diferenciaPrecio);

#endif /* FUNCIONES_H_ */
