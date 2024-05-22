#include "carcasa.h"

void Carcasa::Dibujar(){ GUI::DibujarRectangulo(); }

std::string Carcasa::GetName(){ return m_name; }

void Carcasa::SetName(std::string p_name){m_name = p_name;}


