#include "ArregloCirculo.h"


CArregloCirculo::CArregloCirculo(){


}

CArregloCirculo::~CArregloCirculo(){}

void CArregloCirculo::insertar() {

	CCirculo*objcir = new CCirculo();
	listado.push_back(objcir);
}


void CArregloCirculo::mostrar(Graphics ^gr){

	for each(CCirculo* objcir in listado)
		objcir->mostrar(gr);

}

void CArregloCirculo::mover(Graphics^gr){

	for each(CCirculo* objcir in listado)
		objcir->mover(gr);
}