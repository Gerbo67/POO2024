#pragma once
#include "Prerequisites.h";

class Coche {
private:
	string m_marca;
	string m_modelo;
	int m_year;

public:
	Coche(string _marca, string _modelo, int _year) : m_marca(_marca), m_modelo(_modelo), m_year(_year) {}

	// Funci�n para imprimir informaci�n del coche
	void obtenerInformacion() {
		cout << "Marca: " << m_marca << " | Modelo: "
			<< m_modelo << " | A�o: " << m_year << endl;
	}

	// Setters
	void setMarca(string marca) {
		m_marca = marca;
	}

	void setModelo(string modelo) {
		m_modelo = modelo;
	}

	void setYear(int year) {
		m_year = year;
	}

	// Getters
	string getMarca() {
		return m_marca;
	}

	string getModelo() {
		return m_modelo;
	}

	int getYear() {
		return m_year;
	}
};
