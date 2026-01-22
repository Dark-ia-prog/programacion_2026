#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ESTUDIANTES 100

typedef struct {
    char nombre[100];
    char codigo[20];
    int edad;
    float promedio;
    bool activo;
} Estudiante;

void actualizarNombre(Estudiante *e, const char *nuevoNombre);
void actualizarCodigo(Estudiante *e, const char *nuevoCodigo);
void actualizarEdad(Estudiante *e, int nuevaEdad);
void actualizarPromedio(Estudiante *e, float nuevoPromedio);
void actualizarActivo(Estudiante *e, bool nuevoEstado);

void mostrarNombre(const Estudiante *e);
void mostrarCodigo(const Estudiante *e);
void mostrarEdad(const Estudiante *e);
void mostrarPromedio(const Estudiante *e);
void mostrarActivo(const Estudiante *e);
void mostrarInformacionCompleta(const Estudiante *e);

void agregarEstudiante(Estudiante estudiantes[], int *contador);
void mostrarUnEstudiante(Estudiante estudiantes[], int contador);
void mostrarTodosLosEstudiantes(Estudiante estudiantes[], int contador);
int buscarPorCodigo(Estudiante estudiantes[], int contador, const char *codigo);

int main() {
    Estudiante estudiantes[MAX_ESTUDIANTES];
    int contador = 0;
    int opcion;

    do {
        printf("\n1. Agregar estudiante\n");
        printf("2. Mostrar un estudiante en específico\n");
        printf("3. Mostrar todos los estudiantes\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
            case 1:
                agregarEstudiante(estudiantes, &contador);
                break;
            case 2:
                mostrarUnEstudiante(estudiantes, contador);
                break;
            case 3:
                mostrarTodosLosEstudiantes(estudiantes, contador);
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida\n");
        }
    } while (opcion != 4);

    return 0;
}

void actualizarNombre(Estudiante *e, const char *nuevoNombre) {
    strcpy(e->nombre, nuevoNombre);
}

void actualizarCodigo(Estudiante *e, const char *nuevoCodigo) {
    strcpy(e->codigo, nuevoCodigo);
}

void actualizarEdad(Estudiante *e, int nuevaEdad) {
    e->edad = nuevaEdad;
}

void actualizarPromedio(Estudiante *e, float nuevoPromedio) {
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        e->promedio = nuevoPromedio;
    }
}

void actualizarActivo(Estudiante *e, bool nuevoEstado) {
    e->activo = nuevoEstado;
}

void mostrarNombre(const Estudiante *e) {
    printf("Nombre: %s\n", e->nombre);
}

void mostrarCodigo(const Estudiante *e) {
    printf("Código: %s\n", e->codigo);
}

void mostrarEdad(const Estudiante *e) {
    printf("Edad: %d años\n", e->edad);
}

void mostrarPromedio(const Estudiante *e) {
    printf("Promedio: %.2f\n", e->promedio);
}

void mostrarActivo(const Estudiante *e) {
    printf("Estado: %s\n", e->activo ? "Activo" : "Inactivo");
}

void mostrarInformacionCompleta(const Estudiante *e) {
    mostrarNombre(e);
    mostrarCodigo(e);
    mostrarEdad(e);
    mostrarPromedio(e);
    mostrarActivo(e);
}

void agregarEstudiante(Estudiante estudiantes[], int *contador) {
    if (*contador >= MAX_ESTUDIANTES) return;

    Estudiante e;
    char estado;

    printf("Nombre: ");
    fgets(e.nombre, sizeof(e.nombre), stdin);
    e.nombre[strcspn(e.nombre, "\n")] = 0;

    printf("Código: ");
    fgets(e.codigo, sizeof(e.codigo), stdin);
    e.codigo[strcspn(e.codigo, "\n")] = 0;

    printf("Edad: ");
    scanf("%d", &e.edad);

    printf("Promedio: ");
    scanf("%f", &e.promedio);

    printf("Activo (s/n): ");
    getchar();
    scanf("%c", &estado);
    e.activo = (estado == 's' || estado == 'S');

    estudiantes[*contador] = e;
    (*contador)++;
}

void mostrarUnEstudiante(Estudiante estudiantes[], int contador) {
    char codigo[20];

    if (contador == 0) return;

    printf("Código del estudiante: ");
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = 0;

    int index = buscarPorCodigo(estudiantes, contador, codigo);

    if (index != -1) {
        mostrarInformacionCompleta(&estudiantes[index]);
    } else {
        printf("Estudiante no encontrado\n");
    }
}

void mostrarTodosLosEstudiantes(Estudiante estudiantes[], int contador) {
    if (contador == 0) return;

    for (int i = 0; i < contador; i++) {
        mostrarInformacionCompleta(&estudiantes[i]);
        printf("\n");
    }
}

int buscarPorCodigo(Estudiante estudiantes[], int contador, const char *codigo) {
    for (int i = 0; i < contador; i++) {
        if (strcmp(estudiantes[i].codigo, codigo) == 0) {
            return i;
        }
    }
    return -1;
}
