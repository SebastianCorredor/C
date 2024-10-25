#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTOS 100
#define MAX_NOMBRE 50

// Estructura para un contacto
typedef struct {
    char nombre[MAX_NOMBRE];
    char telefono[15];
    char email[50];
    char cedula[12];
} Contacto;

// Arreglo de contactos y contador global
Contacto contactos[MAX_CONTACTOS];
int totalContactos = 0;

// Funciones
void agregarContacto();
void mostrarContactos();
void buscarContacto();
void eliminarContacto();
void actualizarContacto();
void guardarContactos();
void cargarContactos();

int main() {
    int opcion;

    // Cargar contactos desde el archivo al iniciar
    cargarContactos();

    do {
        printf("\n--- Agenda ---\n");
        printf("1. Agregar contacto\n");
        printf("2. Mostrar contactos\n");
        printf("3. Buscar contacto por nombre\n");
        printf("4. Eliminar contacto por nombre\n");
        printf("5. Actualizar contacto por nombre\n");
        printf("6. Guardar contactos y salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);
        getchar();  // Limpiar el buffer

        switch (opcion) {
            case 1: agregarContacto(); break;
            case 2: mostrarContactos(); break;
            case 3: buscarContacto(); break;
            case 4: eliminarContacto(); break;
            case 5: actualizarContacto(); break;
            case 6: guardarContactos(); printf("Guardando y saliendo...\n"); break;
            default: printf("Opción no válida.\n"); break;
        }
    } while (opcion != 6);

    return 0;
}

// Función para agregar un contacto
void agregarContacto() {
    if (totalContactos >= MAX_CONTACTOS) {
        printf("La agenda está llena.\n");
        return;
    }

    Contacto nuevo;
    printf("Ingrese el nombre: ");
    fgets(nuevo.nombre, MAX_NOMBRE, stdin);
    nuevo.nombre[strcspn(nuevo.nombre, "\n")] = 0; // Eliminar el salto de línea
    printf("Ingrese el teléfono: ");
    fgets(nuevo.telefono, 15, stdin);
    nuevo.telefono[strcspn(nuevo.telefono, "\n")] = 0;
    printf("Ingrese el email: ");
    fgets(nuevo.email, 50, stdin);
    nuevo.email[strcspn(nuevo.email, "\n")] = 0;
    printf("Ingrese la cédula: ");
    fgets(nuevo.cedula, 12, stdin);
    nuevo.cedula[strcspn(nuevo.cedula, "\n")] = 0;

    contactos[totalContactos] = nuevo;
    totalContactos++;

    printf("Contacto agregado con éxito.\n");
}

// Función para mostrar todos los contactos
void mostrarContactos() {
    if (totalContactos == 0) {
        printf("No hay contactos en la agenda.\n");
        return;
    }

    for (int i = 0; i < totalContactos; i++) {
        printf("\nContacto #%d\n", i + 1);
        printf("Nombre: %s\n", contactos[i].nombre);
        printf("Teléfono: %s\n", contactos[i].telefono);
        printf("Email: %s\n", contactos[i].email);
        printf("Cédula: %s\n", contactos[i].cedula);
    }
}

// Función para buscar un contacto por nombre
void buscarContacto() {
    char nombreBuscado[MAX_NOMBRE];
    printf("Ingrese el nombre del contacto a buscar: ");
    fgets(nombreBuscado, MAX_NOMBRE, stdin);
    nombreBuscado[strcspn(nombreBuscado, "\n")] = 0;

    for (int i = 0; i < totalContactos; i++) {
        if (strcmp(contactos[i].nombre, nombreBuscado) == 0) {
            printf("\nContacto encontrado:\n");
            printf("Nombre: %s\n", contactos[i].nombre);
            printf("Teléfono: %s\n", contactos[i].telefono);
            printf("Email: %s\n", contactos[i].email);
            printf("Cédula: %s\n", contactos[i].cedula);
            return;
        }
    }
    printf("Contacto no encontrado.\n");
}

// Función para eliminar un contacto por nombre
void eliminarContacto() {
    char nombreBuscado[MAX_NOMBRE];
    printf("Ingrese el nombre del contacto a eliminar: ");
    fgets(nombreBuscado, MAX_NOMBRE, stdin);
    nombreBuscado[strcspn(nombreBuscado, "\n")] = 0;

    for (int i = 0; i < totalContactos; i++) {
        if (strcmp(contactos[i].nombre, nombreBuscado) == 0) {
            for (int j = i; j < totalContactos - 1; j++) {
                contactos[j] = contactos[j + 1];  // Desplazar contactos
            }
            totalContactos--;
            printf("Contacto eliminado.\n");
            return;
        }
    }
    printf("Contacto no encontrado.\n");
}

// Función para actualizar un contacto por nombre
void actualizarContacto() {
    char nombreBuscado[MAX_NOMBRE];
    printf("Ingrese el nombre del contacto a actualizar: ");
    fgets(nombreBuscado, MAX_NOMBRE, stdin);
    nombreBuscado[strcspn(nombreBuscado, "\n")] = 0;

    for (int i = 0; i < totalContactos; i++) {
        if (strcmp(contactos[i].nombre, nombreBuscado) == 0) {
            printf("Ingrese los nuevos datos del contacto:\n");
            printf("Nuevo nombre (dejar en blanco para no modificar): ");
            char nuevoNombre[MAX_NOMBRE];
            fgets(nuevoNombre, MAX_NOMBRE, stdin);
            if (strcmp(nuevoNombre, "\n") != 0) {
                nuevoNombre[strcspn(nuevoNombre, "\n")] = 0;
                strcpy(contactos[i].nombre, nuevoNombre);
            }

            printf("Nuevo teléfono (dejar en blanco para no modificar): ");
            char nuevoTelefono[15];
            fgets(nuevoTelefono, 15, stdin);
            if (strcmp(nuevoTelefono, "\n") != 0) {
                nuevoTelefono[strcspn(nuevoTelefono, "\n")] = 0;
                strcpy(contactos[i].telefono, nuevoTelefono);
            }

            printf("Nuevo email (dejar en blanco para no modificar): ");
            char nuevoEmail[50];
            fgets(nuevoEmail, 50, stdin);
            if (strcmp(nuevoEmail, "\n") != 0) {
                nuevoEmail[strcspn(nuevoEmail, "\n")] = 0;
                strcpy(contactos[i].email, nuevoEmail);
            }

            printf("Nueva cédula (dejar en blanco para no modificar): ");
            char nuevaCedula[12];
            fgets(nuevaCedula, 12, stdin);
            if (strcmp(nuevaCedula, "\n") != 0) {
                nuevaCedula[strcspn(nuevaCedula, "\n")] = 0;
                strcpy(contactos[i].cedula, nuevaCedula);
            }

            printf("Contacto actualizado.\n");
            return;
        }
    }
    printf("Contacto no encontrado.\n");
}

// Función para guardar los contactos en un archivo
void guardarContactos() {
    FILE *archivo = fopen("agenda.txt", "w");
    if (archivo == NULL) {
        printf("Error al guardar los contactos.\n");
        return;
    }

    for (int i = 0; i < totalContactos; i++) {
        fprintf(archivo, "%s,%s,%s,%s\n", contactos[i].nombre, contactos[i].telefono, contactos[i].email, contactos[i].cedula);
    }

    fclose(archivo);
}

// Función para cargar los contactos desde un archivo
void cargarContactos() {
    FILE *archivo = fopen("agenda.txt", "r");
    if (archivo == NULL) {
        return;  // No hay archivo, agenda vacía
    }

    while (fscanf(archivo, "%[^,],%[^,],%[^,],%[^\n]\n", contactos[totalContactos].nombre, contactos[totalContactos].telefono, contactos[totalContactos].email, contactos[totalContactos].cedula) != EOF) {
        totalContactos++;
    }

    fclose(archivo);
}
