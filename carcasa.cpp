#include "carcasa.h"

Carcasa::Carcasa(int p_x1, int p_y1, int p_x2, int p_y2) : GUI(p_x1, p_y1, p_x2, p_y2) {
 m_pantalla = new Pantalla();
 m_boton1 = new Boton();
 m_boton2 = new Boton();
 m_boton3 = new Boton();
 m_boton4 = new Boton();
 m_boton5 = new Boton();
 m_boton6 = new Boton();
 m_boton7 = new Boton();
 m_boton8 = new Boton();
 m_boton9 = new Boton();
 m_boton0 = new Boton();
 m_botonMas = new Boton();
 m_botonMenos = new Boton();
 m_botonPor = new Boton();
 m_botonDividir = new Boton();
 m_botonIgual = new Boton();
 m_Acumulador = "";
 m_Operador = "";
 m_Operando = "";
}


void Carcasa::Dibujar(){
    m_pantalla->Dibujar();
    m_boton1->Dibujar();
    m_boton2->Dibujar();
    m_boton3->Dibujar();
    m_boton4->Dibujar();
    m_boton5->Dibujar();
    m_boton6->Dibujar();
    m_boton7->Dibujar();
    m_boton8->Dibujar();
    m_boton9->Dibujar();
    m_boton0->Dibujar();
    m_botonMas->Dibujar();
    m_botonMenos->Dibujar();
    m_botonPor->Dibujar();
    m_botonDividir->Dibujar();
    m_botonIgual->Dibujar();
}

void Carcasa::GuardarNumero(std::string numero){
    // Acumular numero
    m_Acumulador += numero;
    // Mostrar Numero
    m_pantalla->MostrarNumero(m_Acumulador);
    
}

void Carcasa::GuardarOperador(std::string operador){
    // Operacion?
    if(m_Operador != ""){
        if(m_Operador == "+" || m_Operador == "-" || m_Operador == "*" || m_Operador == "/"){
            // Guardar Operador
            m_Operador = operador;
            // Guardar acumulado como operativo
            m_Operando = m_Acumulador;
            // Limpiar Acumulador
            m_Acumulador = "";
        } else if(m_Operador == "="){
            // Convertir acumulado a numero
            int num1 = std::stoi(m_Operando);  
            // COnvertir operando a numero
            int num2 = std::stoi(m_Acumulador);
            // Realizar operacion
            int resultado = 0;
            if(m_Operador == "+"){
                resultado = num1 + num2;
            } else if(m_Operador == "-"){
                resultado = num1 - num2;
            } else if(m_Operador == "*"){
                resultado = num1 * num2;
            } else if(m_Operador == "/"){
                resultado = num1 / num2;
            }
            // Convertir resultado a string
            m_Acumulador = std::to_string(resultado);
            // Mostrar resultado
            m_pantalla->MostrarNumero(m_Acumulador);
        }
    }
    // Limpiar buffers
}