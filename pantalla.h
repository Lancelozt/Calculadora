#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED
#include "gui.h"
#include <string>

class Pantalla : public GUI {
public:
    explicit Pantalla(int p_x1, int p_y1, int p_x2, int p_y2);
    virtual ~Pantalla(){};
    void Dibujar();
    void MostrarNumero(std::string numero);
    
    // Métodos de acceso para obtener las coordenadas de la pantalla
    int GetCoordX1() const { return m_coordX1; }
    int GetCoordX2() const { return m_coordX2; }
    int GetCoordY1() const { return m_coordY1; }
    int GetCoordY2() const { return m_coordY2; }
};



#endif // !PANTALLA_H_INCLUDED

