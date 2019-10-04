#define TRUE 0
#define FALSE 1
#define ELEMENTS 3

typedef struct{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty; //*CERO PARA CIERTO, 1 PARA FALSO

}sEmployee;


int initEmployees(sEmployee* list, int len);
int addEmployee(sEmployee* list, int len, int id, char name[],char lastName[],float salary,int sector);
int findEmptyPlace (sEmployee* list, int len);
