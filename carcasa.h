#ifndef CARCASA_H_INCLUDED
#define CARCASA_H_INCLUDED

#include "gui.h"
#include <iostream>

class Carcasa : public GUI {
  private:
  std::string m_name;
  public:
  // Constructor
  explicit Carcasa(int x1, int y1, int x2, int y2) : GUI(x1, y1, x2, y2) {};
  // Destructor
  ~Carcasa() {};
  // Metodos
  void Dibujar();
  std::string GetName();
  void SetName(std::string name);
};

#endif // !CARCASA_H_INCLUDED
