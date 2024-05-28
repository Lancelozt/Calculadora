#include "boton.h"

Boton::Boton(int p_x1, int p_y1, int p_x2, int p_y2, std::string p_Nombre) : GUI(p_x1, p_y1, p_x2, p_y2) {
  // Constructor
  m_Nombre = p_Nombre;
}

Boton::Boton(Boton &o) : GUI(o) {
  // Copy constructor
}


void Boton::Dibujar() {
    GUI::DibujarRectangulo();
    // Ubicarse en el centro del boton
    GUI::Gotoxy((m_coordX1 + m_coordX2) / 2, (m_coordY1 + m_coordY2) / 2);
    // Imprimir el nombre del boton
    std::cout << m_Nombre;
}

void Boton::Presionar(){
  // Cambiar el color del boton al presionarlo
  GUI::Color(GUI::RED, GUI::BLACK);
  // Actualizar el boton
  GUI::DibujarRectangulo();
  // Cambiar su estado a des presionado
  GUI::Color(GUI::BLACK, GUI::WHITE);
  // Realizar acción
  Boton::enviar_Datos();
  // Actualizar el boton
  GUI::DibujarRectangulo();
}







