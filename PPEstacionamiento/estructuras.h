

typedef struct{
    int dia;
    int mes;
    int anio;

}eFecha;


typedef struct{
    int idPropietario;
    char nombre[51];
    eFecha fechaNacimiento;


}ePropietario;

typedef struct{
    char patente[50];
    eFecha fechaIngreso;
    int horaEntrada;
    int horaSalida;
    int idDuenio;

}eVehiculo;

void hardcodeoPropietarios(ePropietario listaPropietarios[], int cantidad);

void hardcodeoVehiculos(eVehiculo listaVehiculos[], int cantidad);

void mostrarListadoPersonas(ePropietario listaPropietarios[], int cantidad);

void mostrarListadoVehiculos(eVehiculo listaVehiculos[], int cantidad);

int ordenarPersonas (ePropietario listaPropietarios[], int cantidad);

int ordenarVehiculos (eVehiculo listaVehiculos[], int cantidad);

int mostrarAutoConDuenio (eVehiculo listaVehiculos[], int cantidadVehiculos, ePropietario listaPropietarios[], int cantidadPropietarios);

void mostrarUnVehiculo(eVehiculo unVehiculo);

void mostrarUnPropietario (ePropietario unPropietario);

int mostrarDuenioConAuto (eVehiculo listaVehiculos[], int cantidadVehiculos, ePropietario listaPropietarios[], int cantidadPropietarios);
