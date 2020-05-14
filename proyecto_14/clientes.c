#include <stdio.h>
#include <string.h>
#include "clientes.h"
void inicializarClientes(eCliente listadoClientes[],int tamC)
{
    int i;
    for(i=0;i<tamC;i++)
        {
            listadoClientes[i].estadoCliente=LIBRE;
        }
}
void HardcodeoClientes(eCliente listadoClientes[], int tam)
{
    int id[5]={123,124,125,126,127};;
    char nombre[5][20]={"Nancy","Jose","Daiana","Matias","Cristian"};
    char apellido[5][20]={"Nancy","Jos","Dai","Mat","Cris"};
    char localidad[5][20]={"Avellaneda","Lanus","Lomas","Banfield","Varela"};
    char sexo[5]={'f','m','f','m','m'};
    int telefono[5]={42451515,2121548,3216511,32321321,123515};
    int edad[5]={20,21,20,10,30};
    int estadoCliente[5]={OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO};

    int i;

    for(i=0; i<tam; i++)
    {
        listadoClientes[i].id= id[i];
        strcpy(listadoClientes[i].nombre,nombre[i]);
        strcpy(listadoClientes[i].apellido,apellido[i]);
        strcpy(listadoClientes[i].localidad,localidad[i]);
        listadoClientes[i].sexo=sexo[i];
        listadoClientes[i].telefono=telefono[i];
        listadoClientes[i].edad=edad[i];
        listadoClientes[i].estadoCliente=estadoCliente[i];
    }
}




void MostrarCliente(eCliente cliente)
{
    printf("\n%10d %20s %20s",cliente.id, cliente.nombre,cliente.localidad);
}

void MostrarListadoClientes(eCliente listadoClientes[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoClientes[i].estadoCliente==OCUPADO){
        MostrarCliente(listadoClientes[i]);
        }
    }
}

eCliente buscarCliente(eCliente listadoclientes[],int tam,int id)
{
    eCliente auxClientes;
    auxClientes.id=-1;
    int i;
    for(i=0;i<tam;i++)
        {
            if(listadoclientes[i].id==id && listadoclientes[i].estadoCliente==OCUPADO)
                {
                    auxClientes=listadoclientes[i];
                }
        }
    return auxClientes;
}


