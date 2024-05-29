#ifndef BOTONES_H_INCLUDED
#define BOTONES_H_INCLUDED

#include <string>
#include "gui.h"


class Boton: public GUI{
  private:
  std::string m_Nombre;
  public:
  explicit Boton(int p_x1 = 0, int p_y1 = 0, int p_x2 = 0, int p_y2 = 0, std::string p_Nombre = "");
  Boton(Boton &o);
  virtual ~Boton(){};
  void Dibujar();
  void Presionar();
  virtual void enviar_Datos(){};

};

#endif // BOTONES_H_INCLUDED
