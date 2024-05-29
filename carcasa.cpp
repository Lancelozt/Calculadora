#include "carcasa.h"

Carcasa::Carcasa(int p_x1, int p_y1, int p_x2, int p_y2) : GUI(p_x1, p_y1, p_x2, p_y2) {
 m_pantalla = new Pantalla(3,2,28,5);
 m_boton1 = new Boton(3,6, 7,8, "1");
 m_boton2 = new Boton(9,6, 13,8, "2");
 m_boton3 = new Boton(15,6, 19,8, "3");
 m_boton4 = new Boton(3,9, 7,11, "4");
 m_boton5 = new Boton(9,9, 13,11, "5");
 m_boton6 = new Boton(15,9, 19,11, "6");
 m_boton7 = new Boton(3,12, 7,14, "7");
 m_boton8 = new Boton(9,12, 13,14, "8");
 m_boton9 = new Boton(15,12, 19,14, "9");
 m_boton0 = new Boton(9,15, 13,17, "0");
 m_botonMas = new Boton(21,6, 25,8, "+");
 m_botonMenos = new Boton(21,9, 25,11, "-");
 m_botonPor = new Boton(21,12, 25,14, "*");
 m_botonDividir = new Boton(21,15, 25,17, "/");
 m_botonIgual = new Boton(15,15, 19,17, "=");
 m_Acumulador = "";
 m_Operador = "";
 m_Operando = "";
}


void Carcasa::Dibujar(){
    GUI::DibujarRectangulo();
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
    } else{
        // Salir del programa
        if(operador == "q"){
            exit(0);
        }
    }

}

void Carcasa::Run(){
    // Mostar la carcasa
    Dibujar();
    // Bucle de ejecucion
    while (true){
        // Mostrar "Opcion"
        GUI::Gotoxy(32,1);
        std::cout << "Opcion?: ";
        // Guardar opcion
        std::string opcion;
        std::cin >> opcion;
        // Procesar opcion
        // Si opcion == bonotes
        if(opcion == "1"){
            // presionar boton 1
            m_boton1->Presionar();
            // Guardar numero
            GuardarNumero(opcion);
        } else if(opcion == "2"){
            // presionar boton 2
            m_boton2->Presionar();
            // Guardar numero
            GuardarNumero(opcion);
        } else if(opcion == "3"){
            // presionar boton 3
            m_boton3->Presionar();
            // Guardar numero
            GuardarNumero(opcion);
        } else if(opcion == "+"){
            // presionar boton +
            m_botonMas->Presionar();
            // Guardar operador
            GuardarOperador(opcion);
        } else if(opcion == "="){
            // presionar boton =
            m_botonIgual->Presionar();
            // Guardar operador
            GuardarOperador(opcion);
        }
    }
}