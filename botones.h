#ifndef BOTONES_H_INCLUDED
#define BOTONES_H_INCLUDED

#include "gui.h"

class Botones : public GUI{
  int m_Boton1, m_Boton2, m_Boton3, m_Boton4;
  public:
  explicit Botones(int p_x1 = 0, int p_y1 = 0, int p_x2 = 0, int p_y2 = 0);
  Botones(Botones &o);
  virtual ~Botones(){};
  void Dibujar();
};

#endif // BOTONES_H_INCLUDED
