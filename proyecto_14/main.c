#include <stdio.h>
#include <stdlib.h>
#include "clientesMascotas.h"
#define TMAS 20
#define TCLIE 10


/******************************************************************************
estructuras:
producto: id , nombre , precio , stock
proveedor:id , nombre , localidad

Cada producto puede tener un solo proveedor
Cada proveedor puede tener muchos productos

crear 4 proveedores
crear 10 productos
con la siguiente distribución

proveedor 1: dos productos
proveedor 2: cuatro productos
proveedor 3: cuatro productos
proveedor 4 : sin productos


1- mostrar todos los proveedores, con sus productos o informar si no tiene ningún producto.

*******************************************************************************/


int main()
{
    eCliente listadoClientes[TCLIE];
    eMascota listadoMascotas[TMAS];
    inicialiazarMascotas(listadoMascotas,TMAS);
    inicializarClientes(listadoClientes,TCLIE);
    printf("***************Clientes************\n");

    HardcodeoClientes(listadoClientes, 5);
    MostrarListadoClientes(listadoClientes, TCLIE);

    printf("\n***************Mascotas Con Cliente************\n");
    HardcodeoMascota(listadoMascotas, 11);
    MostrarListadoMascota(listadoMascotas,TMAS,listadoClientes,TCLIE);
    printf("\n***************Clientes con Mascotas************\n");
    MostrarClienteMascota(listadoClientes, TCLIE, listadoMascotas, TMAS);

    return 0;
}
