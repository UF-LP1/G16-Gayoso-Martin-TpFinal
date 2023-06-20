#pragma once
#include <string>
#include <list>
#include "cOrtopedia.h"
#include "cRegistro.h"


class cANPA
{
public:

	cANPA();
	~cANPA();
	
	bool BuscarPorOrtopedia(cPacientes Pacs);
	friend class cOrtopedia;
	void Guardar_en_Registro();
	cPacientes buscar_Hosp(cHospital hosp);
	//friend ostream& operator<<(ostream& out, cRegistro& reg);

	void Agregar_Ortopedias(cOrtopedia& c); //esta funcion es para que nosotras podamos agegar cosas desde el main
	void Agregar_Registro(cRegistro& r);
	void Agregar_Hosp(cHospital& h);


	void Imprimir_Ortopedias();
	void Imprimir_Registro();
	void Imprimir_Hospitales();
protected:
	list<cOrtopedia> Lista_Ortopedias;
	list<cRegistro>Lista_Registro;
	list<cHospital>Lista_Hosp_Registrados;
};





ostream& operator<<(ostream& out, cHospital& hosp)
{
	//out<<hosp.to_stringH();
	out << hosp.get_Nombre() << hosp.get_Direc() << endl;
	return out;
}
ostream& operator<<(ostream& out, cOrtopedia& ort)
{
	//out<<ort.to_stringO();
	out << ort.get_Nombre()<<ort.get_Direc()<< endl;
	return out;
}
ostream& operator<<(ostream& out, cRegistro& reg)
{
	//out<<reg.to_stringR();
	out << reg.get_FechaSol().get_dia() << reg.get_FechaSol().get_mes() << reg.get_FechaSol().get_anio() << reg.generarFechaE().get_dia()
		<< reg.generarFechaE().get_mes() << reg.generarFechaE().get_mes() << reg.generarFechaE().get_anio();
	cPacientes aux = reg.get_pac();
	cMedicos aux1 = reg.get_med();
	cHospital aux2 = reg.get_hosp();
	out << aux << aux1 << aux2;

	return out;
}