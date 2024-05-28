#include "pantalla.h"

Pantalla::Pantalla(int p_x1,int p_y1, int p_x2, int p_y2) : GUI(p_x1,p_y1,p_x2,p_y2){}


void Pantalla::Dibujar(){
  //Dibujar el marco de la pantalla con ayuda de la clase GUI
  GUI::DibujarRectangulo();
}

void Pantalla::MostrarNumero(std::string numero){
  // Ubicarse en la ezquina inferior derecha de la pantalla
  GUI::Gotoxy(m_coordX2-1,m_coordY2-1);
  // Borrar el contenido de la pantalla
  std::cout <<"";
  // Ubicarse en la pantalla
  GUI::Gotoxy(m_coordX2-1,m_coordY2-1);
  // Mostrar el numero
  std::cout << numero;
}
