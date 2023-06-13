#pragma once
#include <string>
#include<iostream>
#include <ctime>
#include "cFabricante.h"
using namespace std;

class cProtesis
{
public:
	cProtesis(cFabricante fabricante);
	~cProtesis();

	tm get_Fecha_Fab();
	cFabricante get_Fabricante();
	bool get_Sup_Inf();
	bool get_Der_Izq();

	void set_Fecha_Fab(tm FF);
	virtual void set_Sup_Inf(bool SF)=0;
	virtual void set_Der_Izq(bool DI)=0;
	//imprimir puede ser virtua;

	

protected:
	
	tm Fecha_Fabric; 
	cFabricante Fabricante;
	bool Sup_Inf; //true sup, false inf
	bool Der_Izq;// true Der, false Izq



};

