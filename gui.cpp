#include <windows.h>
#include <iostream>
#include "gui.h"

GUI::GUI(int p_coordX1, int p_coordY1, int p_coordX2, int p_coordY2) {
    m_coordX1 = p_coordX1;
    m_coordY1 = p_coordY1;
    m_coordX2 = p_coordX2;
    m_coordY2 = p_coordY2;
}



void GUI::Gotoxy(int p_x, int p_y) {
  std::cout << "\x1b[" << p_y << ";" << p_x << "H";
}

void GUI::Color(int p_a, int p_b) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    FlushConsoleInputBuffer(hConsole);
    SetConsoleTextAttribute(hConsole, p_a | p_b);
}


// NO ES TAMAÑO NI ALTURA, SON PUNTOS DE COORDENADAS
void GUI::DibujarRectangulo() {
  int c;
  for (c = m_coordX1; c < m_coordX2; c++){
    Gotoxy(c, m_coordY2);
    std::cout << ".";
    Gotoxy(c, m_coordY1);
    std::cout << ".";
  }
  for (c = m_coordY1; c <= m_coordY2; c++){
    Gotoxy(m_coordX1, c);
    std::cout << ".";
    Gotoxy(m_coordX2, c);
    std::cout << ".";
  }
}


