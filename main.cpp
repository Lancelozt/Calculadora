#include <iostream>
#include "gui.h"
#include "carcasa.h"
#include "pantalla.h"
#include "boton.h"

void pause();

int main() {
    Carcasa carcasa(1,1,30,20);
    carcasa.Run();  
    pause();
    return 0;
}




void pause() {
    std::cin.ignore();
    std::cin.get(); 
}

