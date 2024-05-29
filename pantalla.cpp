#include "pantalla.h"

Pantalla::Pantalla(int p_x1, int p_y1, int p_x2, int p_y2) : GUI(p_x1, p_y1, p_x2, p_y2) {}

void Pantalla::Dibujar() {
    GUI::DibujarRectangulo();
}

void Pantalla::MostrarNumero(std::string numero) {
    // Limpiar la pantalla
    for (int y = m_coordY1 + 1; y < m_coordY2; ++y) {
        GUI::Gotoxy(m_coordX1 + 1, y);
        for (int x = m_coordX1 + 1; x < m_coordX2; ++x) {
            std::cout << " ";
        }
    }
    // Mostrar el numero
    GUI::Gotoxy(m_coordX2 - numero.length(), m_coordY2 - 1);
    std::cout << numero;
}
