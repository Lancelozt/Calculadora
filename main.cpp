#include <iostream>
#include "gui.h"
#include "pantalla.h"
#include "botones.h"

void pause();

int main() {
    // CREACION DE LA CARCAGA DE LA CALCULADORA
    GUI carcasa(0,0,25,23);
    carcasa.Color(GUI::RED, GUI::GREEN);
    carcasa.DibujarRectangulo();
    // DIBUJANDO LA PANTALLA DE LA CALCULADORA
    Pantalla pantalla(3,2,22,6);
    pantalla.Color(GUI::WHITE, GUI::BLACK);
    pantalla.Dibujar();
    // DIBUJANDO LOS BOTONES DE LA CALCULADORA
    Botones botones;
    botones.Dibujar();
    std::string numero; 
    //std::cin >> numero;
    pantalla.MostrarNumero(numero);
    pause();
    return 0;
}




void pause() {
    std::cin.ignore();
    std::cin.get(); 
}

