#include "botonNumero.h"

BotonNumero::BotonNumero(int p_x1, int p_y1, int p_x2, int p_y2, std::string p_Numero) : Boton(p_x1, p_y1, p_x2, p_y2), m_Numero(p_Numero) {
    // Constructor
}

void BotonNumero::enviar_Datos(){
    // Acumular el número presionado en la carcasa
    Carcasa carcasa; 
    carcasa.GuardarNumero(m_Numero);
}