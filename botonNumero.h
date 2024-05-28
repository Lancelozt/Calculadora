#ifndef BOTONNUMERO_H_INCLUDED
#define BOTONNUMERO_H_INCLUDED

#include <iostream>
#include <string>
#include "boton.h"
#include "carcasa.h"

class BotonNumero: public Boton{
    private:
    std::string m_Numero;
    public:
    explicit BotonNumero(int p_x1 = 0, int p_y1 = 0, int p_x2 = 0, int p_y2 = 0, std::string p_Numero = "");
    void enviar_Datos() override;
};


#endif // BOTONNUMERO_H_INCLUDED