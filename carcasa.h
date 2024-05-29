#ifndef CARCASA_H_INCLUDED
#define CARCASA_H_INCLUDED

#include "gui.h"
#include "pantalla.h"
#include "boton.h"
#include <string>

class Carcasa : public GUI{
  private:
    Pantalla *m_pantalla;
    Boton *m_boton1;
    Boton *m_boton2;
    Boton *m_boton3;
    Boton *m_boton4;
    Boton *m_boton5;
    Boton *m_boton6;
    Boton *m_boton7;
    Boton *m_boton8;
    Boton *m_boton9;
    Boton *m_boton0;
    Boton *m_botonMas;
    Boton *m_botonMenos;
    Boton *m_botonPor;
    Boton *m_botonDividir;
    Boton *m_botonIgual;
    std::string m_Acumulador;
    std::string m_Operador;
    std::string m_Operando;
  public:
    // Constructor
    explicit Carcasa(int p_x1 = 0, int p_y1 = 0, int p_x2 = 0, int p_y2 = 0);
    // Destructor
    virtual ~Carcasa(){};
    // Metodos de la clase
    void Dibujar();
    void GuardarNumero(std::string numero);
    void GuardarOperador(std::string operador);
    void Run();
};

#endif // !CARCASA_H_INCLUDED
