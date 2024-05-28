#include <iostream>
#include "gui.h"
//#include "carcasa.h"
#include "pantalla.h"
#include "boton.h"

void pause();

int main() {
    Pantalla pantalla(1,1,10,6);
    pantalla.Dibujar();
    pantalla.MostrarNumero("1");
    pause();
    return 0;
}




void pause() {
    std::cin.ignore();
    std::cin.get(); 
}

