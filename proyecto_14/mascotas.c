#include <stdio.h>
#include <string.h>
#include "mascotas.h"
void inicialiazarMascotas(eMascota listadoMascotas[],int tamM)
{
    int i;
    for(i=0;i<tamM;i++)
        {
            listadoMascotas[i].estadoMascota=LIBRE;
        }
}
void HardcodeoMascota(eMascota listadoMascotas[], int tam)
{
    int idMascota[11]={10,20,30,40,50,60,70,80,90,100,110};
    int idCliente[11]={123,123,124,124,124,125,125,126,127,127,127};
    char nombre[11][20]={"michifus","mia","Fanta","rob","felix","josefo","JackD","Jhonny","Pata","Andres","loki"};
    char tipo[11][20]={"gato","gato","perro","perro","gato","perro","raro","perro","gato","gato","perro"};
    char raza[11][20]={"ga","ga","per","per","ga","per","iguana","per","ga","ga","per"};
    int edad[11]={1,2,3,4,5,6,7,8,9,10,11};
    float peso[11]={1,2,3,4,5,6,7,8,9,10,11};
    char sexo[11]={'h','h','m','m','m','m','m','m','m','m','m'};
    int estadoMascota[11]={OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO};

    int i;

    for(i=0; i<tam; i++)
    {
        listadoMascotas[i].idMascota= idMascota[i];
         listadoMascotas[i].idCliente = idCliente[i];
        strcpy(listadoMascotas[i].nombre,nombre[i]);
        strcpy(listadoMascotas[i].tipo,tipo[i]);
        strcpy(listadoMascotas[i].raza,raza[i]);
        listadoMascotas[i].edad= edad[i];
        listadoMascotas[i].peso= peso[i];
        listadoMascotas[i].sexo= sexo[i];
        listadoMascotas[i].estadoMascota=estadoMascota[i];


    }
}



void mostrarMascota(eMascota mascota,eCliente listadoClientes[],int tam)
{
    eCliente auxCLiente;
    auxCLiente=buscarCliente(listadoClientes,tam,mascota.idCliente);
    printf("\n%10d %20s %10.2f %10d \t %s ",mascota.idMascota, mascota.nombre, mascota.peso, mascota.edad,auxCLiente.nombre);

}

void MostrarListadoMascota(eMascota listadoMascotas[], int tam,eCliente listadoClientes[],int tamC)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoMascotas[i].estadoMascota==OCUPADO)
            {
            mostrarMascota(listadoMascotas[i],listadoClientes,tamC);
        }
    }
}

