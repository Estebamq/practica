#include "clientesMascotas.h"
#include <stdio.h>
#include <string.h>
void MostrarClienteMascota(eCliente listadoClientes[], int cantClientes, eMascota listadoMascota[], int cantMascota)
{
    int i;
    int j;
    char banderaTieneMascota;


    for(i=0; i<cantClientes; i++)
    {
        if(listadoClientes[i].estadoCliente==OCUPADO)
        {
            MostrarCliente(listadoClientes[i]);
            banderaTieneMascota = 'n';

            for(j=0; j<cantMascota; j++)
            {
                if(listadoClientes[i].id == listadoMascota[j].idCliente && listadoMascota[i].estadoMascota==OCUPADO )
                {
                    banderaTieneMascota = 's';
                    mostrarMascota(listadoMascota[j],listadoClientes,cantClientes);
                }
            }

            if(banderaTieneMascota == 'n')
            {
                printf("\nNo tiene Mascota");
            }
        }
    }
}
