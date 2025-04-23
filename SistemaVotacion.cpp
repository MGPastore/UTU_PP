#include <cstdio>
#include <cstring>

// Definición de la clase Candidato
class Candidato {
private:
    char nombre[50];
    int votos;

public:
    Candidato(const char* nombreInicial) {
        strcpy(nombre, nombreInicial);
        votos = 0;
    }

    const char* getNombre() const {
        return nombre;
    }

    int getVotos() const {
        return votos;
    }

    void sumarVoto() {
        votos++;
    }
};

// Definición de la clase SistemaVotacion
class SistemaVotacion {
private:
    Candidato* candidatos[100]; // Array de punteros a candidatos
    int cantidadCandidatos;

public:
    SistemaVotacion() : cantidadCandidatos(0) {}

    void agregarCandidato() {
        char nombre[50];
        printf("Ingrese nombre del candidato (una palabra): ");
        scanf("%s", nombre);

        if (cantidadCandidatos < 100) {
            candidatos[cantidadCandidatos] = new Candidato(nombre);
            cantidadCandidatos++;
            printf("✅ Candidato '%s' agregado.\n", nombre);
        } else {
            printf("⚠️ No se pueden agregar más candidatos.\n");
        }
    }

    void ingresarVoto() {
        if (cantidadCandidatos == 0) {
            printf("⚠️ No hay candidatos disponibles.\n");
            return;
        }

        printf("\n=== Candidatos ===\n");
        for (int i = 0; i < cantidadCandidatos; ++i) {
            printf("%d. %s\n", i + 1, candidatos[i]->getNombre());
        }

        int opcion;
        printf("Ingrese el número del candidato: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= cantidadCandidatos) {
            candidatos[opcion - 1]->sumarVoto();
            printf("✅ Voto registrado para %s.\n", candidatos[opcion - 1]->getNombre());
        } else {
            printf("⚠️ Número inválido.\n");
        }
    }

    void mostrarResultados() const {
        if (cantidadCandidatos == 0) {
            printf("⚠️ No hay resultados para mostrar.\n");
            return;
        }

        printf("\n=== Resultados ===\n");
        int mayorVotos = -1;
        int indiceGanador = -1;

        for (int i = 0; i < cantidadCandidatos; ++i) {
            printf("%s: %d votos\n", candidatos[i]->getNombre(), candidatos[i]->getVotos());
            if (candidatos[i]->getVotos() > mayorVotos) {
                mayorVotos = candidatos[i]->getVotos();
                indiceGanador = i;
            }
        }

        if (indiceGanador != -1) {
            printf("\n🏆 Ganador: %s\n", candidatos[indiceGanador]->getNombre());
        }
    }

    void guardarResultados() const {
        FILE* archivo = fopen("resultados.txt", "w");
        if (!archivo) {
            printf("⚠️ Error al guardar archivo.\n");
            return;
        }

        fprintf(archivo, "=== Resultados de la Votación ===\n");
        for (int i = 0; i < cantidadCandidatos; ++i) {
            fprintf(archivo, "%s: %d votos\n", candidatos[i]->getNombre(), candidatos[i]->getVotos());
        }

        fclose(archivo);
        printf("📁 Resultados guardados en 'resultados.txt'\n");
    }

    ~SistemaVotacion() {
        for (int i = 0; i < cantidadCandidatos; ++i) {
            delete candidatos[i];
        }
    }
};
