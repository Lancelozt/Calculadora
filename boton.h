#ifndef BOTONES_H_INCLUDED
#define BOTONES_H_INCLUDED

#include "gui.h"

class Boton: public GUI{
  int m_Boton1, m_Boton2, m_Boton3, m_Boton4;
  public:
  explicit Boton(int p_x1 = 0, int p_y1 = 0, int p_x2 = 0, int p_y2 = 0);
  Boton(Boton &o);
  virtual ~Boton(){};
  void Dibujar();
};

#endif // BOTONES_H_INCLUDED
