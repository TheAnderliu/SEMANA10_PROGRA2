#pragma once
using namespace System::Drawing;

class CCirculo
{
private:
	int x, y;
	int ancho, alto;
	int dx, dy;


public:
	CCirculo();
	~CCirculo();
	void mostrar(Graphics ^gr);
	void mover(Graphics ^gr);
};

