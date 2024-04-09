#include <iostream>
#include "Cola.h"
using namespace std;
int main() {
    Cola MiCola;
    Solicitud solicitud;
    int opcion;

    do {
        cout << "\nMANU:\n";
        cout << "1) ALTA DE SOLICITUD\n";
        cout << "2) ELABORAR CONSTANCIA\n";
        cout << "3) SALIR\n";
        cout << "OPCION: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nNOMBRE: ";
                cin.ignore();
                getline(cin, solicitud.nombreAlumno);
                cout << "\nCARRERA: ";
                getline(cin, solicitud.carrera);
                cout << "\nMATERIAS APROBADAS: ";
                cin >> solicitud.materiasAprobadas;
                cout << "\nPROMEDIO: ";
                cin >> solicitud.promedioGeneral;
                MiCola.enqueue(solicitud);
                cout << "SOLI AGREGADA." << endl;
                break;
            case 2:
                cout << "ELABORACION DE CONSTANCIA EN PROCESO" << endl;
                solicitud = MiCola.dequeue();
                if (!solicitud.nombreAlumno.empty()) {
                    cout << "SE ELABORO LA CONSTANCIA" << endl;
                    cout << solicitud << endl;
                }
                break;
            case 3:
                cout << "BAIS" << endl;
                break;
            default:
                cout << "OPCION INVALIDA" << endl;
        }
    } while (opcion != 3);

    return 0;
}
