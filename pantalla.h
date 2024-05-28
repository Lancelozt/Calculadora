#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED
#include "gui.h"
#include <string>

class Pantalla : public GUI {
public:
    explicit Pantalla(int p_x1 = 0, int p_y1 = 0, int p_x2 = 0, int p_y2 = 0);
    virtual ~Pantalla(){};
    void Dibujar();
    void MostrarNumero(std::string numero);
};

#endif // !PANTALLA_H_INCLUDED

