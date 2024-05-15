#ifndef GUI_H_INCLUDED
#define GUI_H_INCLUDED
#include <iostream>
class GUI{
  protected:
    int m_coordX1, m_coordY1, m_coordX2, m_coordY2;
	public:
    // CONSTRUCTOR
    explicit GUI(int p_coordX1 = 0, int p_coordY1 = 0, int p_coordX2 = 0, int p_coordY2 = 0);
    void Gotoxy(int, int);
		void Color(int, int);
    void DibujarRectangulo();
		enum{BLACK =0, BLUE,GREEN,CYAN,RED,MAGENTA,BROWN,BGRAY,GRAY,BBLUE,BGREEN,BCYAN,BRED,BMAGENTA,YELLOW,WHITE};
};




#endif
