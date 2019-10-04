


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

    int patente;
    eFecha fechaIngreso;
    int horaEntrada;
    int horaSalida;
    int idDuenio;

}eVehiculo;



void inicializarPropietarios (ePropietario listaPropietarios[], int cantidad);
ePropietario cargarPropietario();
