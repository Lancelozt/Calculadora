#include <iostream>
#include "gui.h"
#include "carcasa.h"
#include "pantalla.h"
#include "boton.h"

void pause();

int main() {
    // CREACION DE LA CARCAGA DE LA CALCULADORA
    Carcasa carcasa(0,0,25,23);
    // CREACION DE LA PANTALLA DE LA CALCULADORA
    Pantalla pantalla(3,2,22,6);
    // CREACION DE LOS BOTONES DE LA CALCULADORA
    Boton botones(3,7,22,22);
    // DIBUJAR LA CARCASA DE LA CALCULADORA
    carcasa.Dibujar();
    // DIBUJAR LA PANTALLA DE LA CALCULADORA
    pantalla.Dibujar();
    // DIBUJAR LOS BOTONES DE LA CALCULADORA
    botones.Dibujar();
    pause();
    return 0;
}




void pause() {
    std::cin.ignore();
    std::cin.get(); 
}

