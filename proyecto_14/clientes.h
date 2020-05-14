#define OCUPADO 0
#define LIBRE -1

typedef struct
{
    int id;
    char nombre[20];
    char apellido[20];
    char localidad[20];
    char sexo;
    int telefono;
    int edad;
    int estadoCliente;
} eCliente;


void HardcodeoClientes(eCliente [], int);
void MostrarCliente(eCliente cliente);
void MostrarListadoClientes(eCliente listadoClientes[], int tam);
void inicializarClientes(eCliente listadoClientes[],int tamC);
eCliente buscarCliente(eCliente listadoclientes[],int tam,int id);


