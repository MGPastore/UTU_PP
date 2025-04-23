// index.cpp
#include <cstdio>
#include "SistemaVotacion.h"
#include "Menu.h"

int main() {
    SistemaVotacion sistema;
    Menu menu(sistema);
    menu.mostrar();
    return 0;
}
