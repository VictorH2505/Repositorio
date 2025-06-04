// Calcular la tarifa según el consumo: menor a  100kW, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.
#include <iostream> 
using namespace std;

int main (){
    int consumo;

    cout << "Ingrese su consumo energetico en este mes" << endl;
    cin >> consumo; 

        if  (consumo < 100)
        {
            cout<< "Su tarifa para este mes es de $20" <<endl;
        }
        else if (100 < consumo && consumo < 200)
        {
            cout<< "Su tarifa para este mes es de $40" <<endl;
        }
        else if (consumo > 200)
        {
            cout<< "Su tarifa para este mes es de $80" <<endl;
        }
        else 
        {
            cout << "ingrese un valor valido" <<endl;
        }
    return 0;
}