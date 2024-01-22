#pragma once

class Circulo {
private:
    double radio;

public:
    // Constructor
    Circulo(double r) : radio(r) {}

    // Método para calcular el área
    double calcularArea() {
        return 3.14159265358979323846 * radio * radio;
    }

    // Método para calcular el perímetro
    double calcularPerimetro() {
        return 2 * 3.14159265358979323846 * radio;
    }

    // Método para establecer el radio
    void setRadio(double r) {
        radio = r;
    }

    // Método para obtener el radio
    double getRadio() {
        return radio;
    }
};