#include "botones.h"

Botones::Botones(int p_x1, int p_y1, int p_x2, int p_y2) : GUI(p_x1, p_y1, p_x2, p_y2) {
  // Constructor
}

Botones::Botones(Botones &o) : GUI(o) {
  // Copy constructor
}


void Botones::Dibujar() {
    GUI::Color(GUI::WHITE, GUI::BLACK);

    // DIBUJANDO LOS BOTONES DE LA CALCULADORA
    int botonAncho = 3; // Ancho del botón
    int botonAlto = 2; // Alto del botón
    int espacioX = 2; // Espacio horizontal entre botones
    int espacioY = 2; // Espacio vertical entre botones
    int inicioX = 3; // Coordenada X donde comienza el primer botón
    int inicioY = 8; // Coordenada Y donde comienza el primer botón
    int botonesPorFila = 4; // Botones por fila
    int totalBotones = 15; // Total de botones

    for(int i = 0; i < totalBotones; i++) {
        int fila = i / botonesPorFila;
        int columna = i % botonesPorFila;

        int x1 = inicioX + columna * (botonAncho + espacioX);
        int y1 = inicioY + fila * (botonAlto + espacioY);
        int x2 = x1 + botonAncho;
        int y2 = y1 + botonAlto;

        Botones boton(x1, y1, x2, y2);
        boton.DibujarRectangulo(); // Llamar al método de instancia, no al de clase
    }
}






