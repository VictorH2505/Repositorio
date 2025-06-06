#include <iostream>
using namespace std;

int main (){
    int mes;

    cout << ">>Ingrese el numero del mes del que desea conocer su cantidad de dias<<" <<endl;
    cout << "1. Enero" <<endl;
    cout << "2. Febrero" <<endl;
    cout << "3. Marzo" <<endl;
    cout << "4. Abril" <<endl;
    cout << "5. Mayo" <<endl;
    cout << "6. Junio" <<endl;
    cout << "7. Julio" <<endl;
    cout << "8. Agosto" <<endl;
    cout << "9. Septiembre" <<endl;
    cout << "10. Octubre" <<endl;
    cout << "11. Noviembre" <<endl;
    cout << "12. Diciembre" <<endl;
    cin >> mes;

    switch (mes){
        case 1:
        cout << "Enero tiene 31 dias" << endl;
        break;
        case 2:
        cout << "Febrero tiene 28 dias" << endl;
        break;
        case 3:
        cout << "Marzo tiene 31 dias" << endl;
        break;
        case 4:
        cout << "Abril tiene 30 dias" << endl;
        break;
        case 5:
        cout << "Mayo tiene 31 dias" << endl;
        break;
        case 6:
        cout << "Junio tiene 30 dias" << endl;
        break;
        case 7:
        cout << "Julio tiene 31 dias" << endl;
        break;
        case 8:
        cout << "Agosto tiene 31 dias" << endl;
        break;
        case 9:
        cout << "Septiembre tiene 30 dias" << endl;
        break;
        case 10:
        cout << "Octubre tiene 31 dias" << endl;
        break;        
        case 11:
        cout << "Noviembre tiene 30 dias" << endl;
        break;
        case 12:
        cout << "Diciembre tiene 31 dias" << endl;
        break;
        default:
        cout << "Ingrese un valor valido" << endl;
        break;
    }

    

    return 0;
}