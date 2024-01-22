#pragma once

class Circulo {
private:
    double radio;

public:
    // Constructor
    Circulo(double r) : radio(r) {}

    // M�todo para calcular el �rea
    double calcularArea() {
        return 3.14159265358979323846 * radio * radio;
    }

    // M�todo para calcular el per�metro
    double calcularPerimetro() {
        return 2 * 3.14159265358979323846 * radio;
    }

    // M�todo para establecer el radio
    void setRadio(double r) {
        radio = r;
    }

    // M�todo para obtener el radio
    double getRadio() {
        return radio;
    }
};