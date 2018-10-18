#pragma once
#include<iostream>
#include<vector>
#include"Circulo.h"

using namespace std;

class CArregloCirculo
{
private:

	vector<CCirculo *> listado;


public:
	CArregloCirculo();
	~CArregloCirculo();
	void insertar();
	void mostrar(Graphics ^gr);
	void mover(Graphics^gr);
};

