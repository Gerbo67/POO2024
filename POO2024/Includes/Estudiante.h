#pragma once
#include "Prerequisites.h";

class Estudiante {
private:
    string nombre;
    int edad;

public:
    // Constructor
    Estudiante(string nombre, int edad) : nombre(nombre), edad(edad) {}

    // Métodos para obtener los datos del estudiante
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }

    // Método para imprimir la información del estudiante
    void imprimirInfo() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};
