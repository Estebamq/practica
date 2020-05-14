#define OCUPADO 0
#define LIBRE -1
#include "clientes.h"

typedef struct
{
    int idMascota;
    int idCliente;
    char nombre[20];
    char tipo[20];
    char raza[20];
    int edad;
    float peso;
    char sexo;
    int estadoMascota;
}eMascota;


void inicialiazarMascotas(eMascota listadoMascotas[],int tamM);
void HardcodeoMascota(eMascota [], int);
void mostrarMascota(eMascota mascota,eCliente listadoClientes[],int tam);
void MostrarListadoMascota(eMascota listadoMascotas[], int tam,eCliente listadoClientes[],int tamC);

