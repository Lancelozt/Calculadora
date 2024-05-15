#include "pantalla.h"

Pantalla::Pantalla(int p_x1,int p_y1, int p_x2, int p_y2) : GUI(p_x1,p_y1,p_x2,p_y2){}


void Pantalla::Dibujar(){
  //Dibujar el marco de la pantalla con ayuda de la clase GUI
  GUI::DibujarRectangulo();
}

void Pantalla::MostrarNumero(std::string numero){
    GUI::Gotoxy(0,25);
    std::cout << "Que numero desea presionar: ";
    // COMPROBAR QUE SOLO SE INGRESAN NUMEROS DEL 0 AL 9
    bool flag = false;
    while (!flag) {
        std::cin >> numero;
        if(numero.size() == 1 && numero[0] >= '0' && numero[0] <= '9') {
            flag = true;
        } else {
            std::cout << "Error: Debe ingresar un numero del 0 al 9" << std::endl;
        }
    }
  // UBICARSE DENTRO DE LA PANTALLA
  GUI::Gotoxy(20,5);
  // LIMPIAR LA PANTALLA
  std::cout << " ";
  // UBICARSE DENTRO DE LA PANTALLA
  GUI::Gotoxy(19,5);
  // MOSTRAR EL NUMERO

  std::cout << numero;
}
