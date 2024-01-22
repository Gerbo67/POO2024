#include "../Includes/Circulo.h"
#include "../Includes/Persona.h"
#include "../Includes/Coche.h"
#include "../Includes/Estudiante.h"

int main() {
    /// PERSONA

    // Creación de un objeto Persona con valores específicos
    Persona miPersona("Juan", 20);

    // Obtener y mostrar información de la persona
    cout << "Nombre: " << miPersona.getNombre() << endl;
    cout << "Edad: " << miPersona.getEdad() << endl;

    /// COCHE

    // Creación de un objeto Coche con valores específicos
    Coche miCoche("Toyota", "Corolla", 2020);

    // Obtener y mostrar información del coche
    miCoche.obtenerInformacion();

    // Cambiar y mostrar la nueva información del coche
    miCoche.setMarca("Honda");
    miCoche.setModelo("Civic");
    miCoche.setYear(2022);
    miCoche.obtenerInformacion();

    /// CIRCULO

    // Creación de un objeto Circulo con radio 5
    Circulo miCirculo(5);

    // Mostrar información del círculo
    cout << "El área del círculo es: " << miCirculo.calcularArea() << endl;
    cout << "El perímetro del círculo es: " << miCirculo.calcularPerimetro() << endl;

    /// ESTUDIANTE

    //Arreglo de estudiantes
    Estudiante estudiantes[3] = {
        Estudiante("Juan", 20),
        Estudiante("Pedro", 21),
        Estudiante("María", 22)
    };

    //Imprimir información de los estudiantes
    for (int i = 0; i < 3; i++) {
        estudiantes[i].imprimirInfo();
    }


    return 0;
}
