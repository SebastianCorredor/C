#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[30];
    char telefono[10];
    char email[30];
    char cedula[10];
} Contacto;

Contacto listaContactos[15];
int totalContactos = 0;
void cargarContactos();
void agregarContacto();
void mostrarContactos();
void buscarContacto();
void actualizarContacto();
void eliminarContacto();
void guardarContactos();

int main() {
    int op = 0;  // Inicializa la variable op
    cargarContactos();
    while (op != 6) {
        printf(".................Agenda.................\n");
        printf("1) Mostrar lista.........................\n");
        printf("2) Agregar integrante de la lista........\n");
        printf("3) Buscar contacto por c�dula............\n");
        printf("4) Eliminar integrante de la lista.......\n");
        printf("5) Actualizar integrante de la lista.....\n");
        printf("6) Salir del programa....................\n");
        scanf("%d", &op);
        getchar();  // Limpia el buffer de entrada

        if (op == 1) {
            mostrarContactos();
        } else if (op == 2) {
            agregarContacto();
        } else if (op == 3) {
            buscarContacto();
        } else if (op == 4) {
            eliminarContacto();
        }
        else if (op == 5){
            actualizarContacto();
        }
        else if (op == 6){
            guardarContactos();
        }

    }
    return 0;
}

void agregarContacto() {
    if (totalContactos >= 15) {
        printf("La agenda est� llena.\n");
        return;
    }
    Contacto user;
    printf("Ingrese nombre: ");
    fgets(user.nombre, 30, stdin);
    user.nombre[strcspn(user.nombre, "\n")] = 0;

    printf("Ingrese email: ");
    fgets(user.email, 30, stdin);
    user.email[strcspn(user.email, "\n")] = 0;

    printf("Ingrese c�dula: ");
    fgets(user.cedula, 10, stdin);
    user.cedula[strcspn(user.cedula, "\n")] = 0;

    printf("Ingrese tel�fono: ");
    fgets(user.telefono, 10, stdin);
    user.telefono[strcspn(user.telefono, "\n")] = 0;

    listaContactos[totalContactos] = user;
    totalContactos++;

    printf("Contacto agregado exitosamente.\n");
}

void mostrarContactos() {
    if (totalContactos == 0) {
        printf("No hay contactos en la agenda.\n");
        return;
    }

    for (int i = 0; i < totalContactos; i++) {
        printf("\nContacto #%d\n", i + 1);
        printf("Nombre: %s\n", listaContactos[i].nombre);
        printf("Email: %s\n", listaContactos[i].email);
        printf("Tel�fono: %s\n", listaContactos[i].telefono);
        printf("C�dula: %s\n", listaContactos[i].cedula);
    }
}

void buscarContacto() {
    char cedulaCon[10];  // Arreglo de caracteres para almacenar la c�dula

    // Solicitar la c�dula del contacto
    printf("Ingrese la c�dula del contacto buscado: ");
    fgets(cedulaCon, 10, stdin);  // Leer la c�dula ingresada por el usuario
    cedulaCon[strcspn(cedulaCon, "\n")] = 0;  // Eliminar el salto de l�nea si existe

    // Bucle para recorrer todos los contactos
    for (int i = 0; i < totalContactos; i++) {
        // Comparar la c�dula del contacto con la c�dula ingresada
        if (strcmp(listaContactos[i].cedula, cedulaCon) == 0) {
            // Si coincide, mostrar la informaci�n del contacto
            printf("\nContacto encontrado:\n");
            printf("Nombre: %s\n", listaContactos[i].nombre);
            printf("Tel�fono: %s\n", listaContactos[i].telefono);
            printf("Email: %s\n", listaContactos[i].email);
            printf("C�dula: %s\n", listaContactos[i].cedula);
            return;  // Salir de la funci�n despu�s de encontrar el contacto
        }
    }

    // Si no se encuentra ning�n contacto, mostrar un mensaje de error
    printf("Contacto no encontrado.\n");
}

void eliminarContacto(){
    char cedulaCon[10];
    printf("Ingrese la cedula del contacto a borrar: \n");
    fgets(cedulaCon, 10, stdin);
    cedulaCon[strcspn(cedulaCon, "\n")] = 0;

    for(int i = 0; i < totalContactos; i++){
        if (strcmp(listaContactos[i].cedula, cedulaCon) == 0){
            for (int j = i; j < totalContactos-1; j++){
                listaContactos[j] = listaContactos[j+1];
            }
            totalContactos--;
            printf("Contacto eliminado \n");
            return;
        }
        printf("Contacto no encontrado \n");
    }

}

void actualizarContacto(){
    char cedulaCon[10];
    printf("Ingrese la cedula del contacto a actualizar");
    fgets(cedulaCon, 10, stdin);
    cedulaCon[strcspn(cedulaCon, "\n")] = 0;

    for (int i = 0; i < totalContactos; i++){
        if (strcmp(listaContactos[i].cedula, cedulaCon) == 0){

            printf("Ingrese los nuevos datos del contacto)\n");

            printf("Ingrese el nombre (enter para dejar como est�)\n");
            char nuevoNombre[30];
            fgets(nuevoNombre, 30, stdin);
            if(strcmp(nuevoNombre, "\n") != 0){
                nuevoNombre[strcspn(nuevoNombre, "\n")] = 0;
                strcpy(listaContactos[i].nombre, nuevoNombre);
            }


            printf("Ingrese el telefono (enter para dejar como est�)\n");
            char nuevoTelefono[10];
            fgets(nuevoTelefono, 10, stdin);
            if(strcmp(nuevoTelefono, "\n") != 0){
                nuevoTelefono[strcspn(nuevoTelefono, "\n")] = 0;
                strcpy(listaContactos[i].telefono, nuevoTelefono);
            }

            printf("Ingrese el email (enter para dejar como est�)\n");
            char nuevoEmail[30];
            fgets(nuevoEmail, 30, stdin);
            if(strcmp(nuevoEmail, "\n") != 0){
                nuevoEmail[strcspn(nuevoEmail, "\n")] = 0;
                strcpy(listaContactos[i].email, nuevoEmail);
            }

            printf("Ingrese la cedula (enter para dejar como est�)\n");
            char nuevaCedula[10];
            fgets(nuevaCedula, 10, stdin);
            if(strcmp(nuevaCedula, "\n") != 0){
                nuevaCedula[strcspn(nuevaCedula, "\n")] = 0;
                strcpy(listaContactos[i].cedula, nuevaCedula);
            }

            printf("Contacto actualizado. \n");
            return;
        }
    }
    printf("Contacto no encontrado.\n");
}

void guardarContactos(){

FILE *archivo = fopen("registro.txt", "w");
    if (archivo == NULL){
        printf("NAO\n");
        return;

    }
    for(int i = 0; i < totalContactos; i++){
        fprintf(archivo, "%s, %s, %s, %s \n", listaContactos[i].nombre, listaContactos[i].telefono, listaContactos[i].email, listaContactos[i].cedula);
    }
    fclose(archivo);
}

void cargarContactos() {
    FILE *archivo = fopen("registro.txt", "r");
    if (archivo == NULL) {
        return;  // No hay archivo, agenda vac�a
    }

    while (fscanf(archivo, "%[^,],%[^,],%[^,],%[^\n]\n", listaContactos[totalContactos].nombre, listaContactos[totalContactos].telefono, listaContactos[totalContactos].email, listaContactos[totalContactos].cedula) != EOF) {
        totalContactos++;
    }

    fclose(archivo);
}
