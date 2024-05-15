# Proyecto de Calculadora

Este proyecto es una implementación de una calculadora sencilla en C++, que utiliza una interfaz gráfica básica para dibujar la carcasa, pantalla y botones de la calculadora en la consola. (AUN NO TERMINADO)

## Estructura del Proyecto

El proyecto está organizado en los siguientes archivos principales:

- `main.cpp`
- `GUI.h` y `GUI.cpp`
- `Pantalla.h` y `Pantalla.cpp`
- `Botones.h` y `Botones.cpp`

## Descripción de las Clases

### Clase `GUI`

La clase `GUI` proporciona métodos básicos para manipular la interfaz gráfica en la consola.

- **Constructor:**
  ```cpp
  GUI(int xInicio = 0, int yInicio = 0, int xFin = 0, int yFin = 0);
  
