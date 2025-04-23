#include <cstdio>
#include "SistemaVotacion.cpp"  // Incluir el archivo del sistema de votación

// Definición de la clase Menu
class Menu {
private:
    SistemaVotacion& sistema;

public:
    Menu(SistemaVotacion& refSistema) : sistema(refSistema) {}

    void mostrar() {
        int opcion;
        do {
            printf("\n=== Menú de Votación ===\n");
            printf("1. Ingresar Voto\n");
            printf("2. Mostrar Resultados\n");
            printf("3. Agregar Candidato\n");
            printf("4. Salir y Guardar\n");
            printf("Seleccione una opción: ");
            scanf("%d", &opcion);

            switch (opcion) {
                case 1: sistema.ingresarVoto(); break;
                case 2: sistema.mostrarResultados(); break;
                case 3: sistema.agregarCandidato(); break;
                case 4:
                    sistema.guardarResultados();
                    printf("👋 Gracias por usar el sistema.\n");
                    break;
                default:
                    printf("⚠️ Opción inválida. Intente de nuevo.\n");
            }
        } while (opcion != 4);
    }
};

// Función principal
int main() {
    SistemaVotacion sistema;
    Menu menu(sistema);
    menu.mostrar();
    return 0;
}
