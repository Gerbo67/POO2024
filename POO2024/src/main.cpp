#include "../Includes/Circulo.h"
#include "../Includes/Persona.h"
#include "../Includes/Coche.h"
#include "../Includes/Estudiante.h"

int main() {
    /// PERSONA

    // Creaci�n de un objeto Persona con valores espec�ficos
    Persona miPersona("Juan", 20);

    // Obtener y mostrar informaci�n de la persona
    cout << "Nombre: " << miPersona.getNombre() << endl;
    cout << "Edad: " << miPersona.getEdad() << endl;

    /// COCHE

    // Creaci�n de un objeto Coche con valores espec�ficos
    Coche miCoche("Toyota", "Corolla", 2020);

    // Obtener y mostrar informaci�n del coche
    miCoche.obtenerInformacion();

    // Cambiar y mostrar la nueva informaci�n del coche
    miCoche.setMarca("Honda");
    miCoche.setModelo("Civic");
    miCoche.setYear(2022);
    miCoche.obtenerInformacion();

    /// CIRCULO

    // Creaci�n de un objeto Circulo con radio 5
    Circulo miCirculo(5);

    // Mostrar informaci�n del c�rculo
    cout << "El �rea del c�rculo es: " << miCirculo.calcularArea() << endl;
    cout << "El per�metro del c�rculo es: " << miCirculo.calcularPerimetro() << endl;

    /// ESTUDIANTE

    //Arreglo de estudiantes
    Estudiante estudiantes[3] = {
        Estudiante("Juan", 20),
        Estudiante("Pedro", 21),
        Estudiante("Mar�a", 22)
    };

    //Imprimir informaci�n de los estudiantes
    for (int i = 0; i < 3; i++) {
        estudiantes[i].imprimirInfo();
    }


    return 0;
}
