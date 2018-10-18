#include "Circulo.h"



CCirculo::CCirculo() {
	x = 5;
	y = 5;
	dx = 1;
	dy = 1;
	ancho = 45;
	alto = 45;

}

CCirculo::~CCirculo(){}

void CCirculo::mostrar(Graphics ^gr){

	gr->FillEllipse(Brushes::White, x, y, 45, 45);
	gr->DrawEllipse(Pens::Black, x, y, 45, 45);



}

void CCirculo::mover(Graphics ^gr){

	if (x+dx<0||x+dx+ancho>gr->VisibleClipBounds.Width)
	{
		dx *= -1;
	}

	if (y + dy<0 || y + dy+alto>gr->VisibleClipBounds.Height)
	{
		dy *= -1;
	}

	x += dx;
	y += dy;

}
