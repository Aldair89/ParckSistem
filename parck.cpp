#include <iostream>
#include <map>
#include <vector>

using namespace std;

// Estructura para representar una actividad en el parque
struct Actividad {
    string nombre;
    int capacidad;
    int cuposDisponibles;
};

// Clase para representar una reserva de actividad
class Reserva {
private:
    string nombreVisitante;
    string actividad;
    int numPersonas;

public:
    // Constructor
    Reserva(string nombre, string act, int num) {
        nombreVisitante = nombre;
        actividad = act;
        numPersonas = num;
    }

    // Método para obtener el nombre del visitante
    string getNombreVisitante() {
        return nombreVisitante;
    }

    // Método para obtener la actividad reservada
    string getActividad() {
        return actividad;
    }

    // Método para obtener el número de personas en la reserva
    int getNumPersonas() {
        return numPersonas;
    }
};

int main() {
    // Mapa para almacenar las actividades del parque (nombre de actividad -> objeto de actividad)
    map<string, Actividad> actividades;

    // Vector para almacenar las reservas
    vector<Reserva> reservas;

    int opcion;
    string nombreActividad;
    string nombreVisitante;
    int numPersonas;

    do {
        cout << "======= PARQUE RECREATIVO =======" << endl;
        cout << "1. Agregar actividad" << endl;
        cout << "2. Realizar reserva" << endl;
        cout << "3. Mostrar actividades disponibles" << endl;
        cout << "4. Mostrar reservas" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "Ingrese el nombre de la actividad: ";
                cin.ignore();
                getline(cin, nombreActividad);
                cout << "Ingrese la capacidad de la actividad: ";
                cin >> actividades[nombreActividad].capacidad;
                actividades[nombreActividad].cuposDisponibles = actividades[nombreActividad].capacidad;
                cout << "Actividad agregada exitosamente." << endl;
                break;
            }
            case 2: {
                cout << "Ingrese su nombre: ";
                cin.ignore();
                getline(cin, nombreVisitante);
                cout << "Ingrese la actividad que desea reservar: ";
                getline(cin, nombreActividad);
                cout << "Ingrese el número de personas: ";
                cin >> numPersonas;

                if (actividades.find(nombreActividad) != actividades.end()) {
                    if (actividades[nombreActividad].cuposDisponibles >= numPersonas) {
                        actividades[nombreActividad].cuposDisponibles -= numPersonas;
                        reservas.push_back(Reserva(nombreVisitante, nombreActividad, numPersonas));
                        cout << "Reserva realizada exitosamente." << endl;
                    } else {
                        cout << "No hay cupos disponibles para la actividad." << endl;
                    }
                } else {
                    cout << "Actividad no encontrada." << endl;
                }
                break;
            }
            case 3: {
                cout << "Actividades disponibles:" << endl;
                for (const auto& actividad : actividades) {
                    cout << actividad.first << " (Cupos disponibles: " << actividad.second.cuposDisponibles << ")" << endl;
                }
                break;
            }
            case 4: {
                cout << "Reservas:" << endl;
                for (const auto& reserva : reservas) {
                    cout << "Nombre: " << reserva.getNombreVisitante() << " - Actividad: " << reserva.getActividad() << " - Personas: " << reserva.getNumPersonas() << endl;
                }
                break;
            }
            case 5:
                cout << "Saliendo del programa del parque recreativo." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcion != 5);

    return 0;
}
