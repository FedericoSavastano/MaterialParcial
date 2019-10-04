
typedef struct{
    int id;
    char nombre[51];
    char apellido[51];
    float salario;
    int sector;
    int isEmpty; //*CERO PARA CIERTO, 1 PARA FALSO

}eEmployee;



void mostrarMenu();
eEmployee agregarEmpleado ();
int inicializarEmpleados (eEmployee listaempleados[], int cantidad);
int buscarLugarLibre(eEmployee listaempleados[], int cantidad);
void mostrarEmpleados(eEmployee listaempleados[], int cantidad);
