// Juego de adivinanzas: El usuario tiene 5 intentos para adivinar un número aleatorio entre 1 y 50
#include <iostream> 
using namespace std;

int main(){
    int numero;
    int intento = 0;

    do {
    cout << "Intente adivinar un numero aleatorio entre 1 y 50" << endl;
    cout << "==================================================" << endl;    
    cout << "Ingrese su intento" << endl;    
    cin >> numero ;
    if (numero < 41)
    {
        cout << "===NUMERO EQUIVOCADO===" << endl;
        cout << "El valor ingresado es muy bajo" << endl;     
        intento = (intento + 1)  ;
    }
    else if (numero > 41)
    {
        cout << "====NUMERO EQUIVOCADO====" << endl;     
        cout << "El valor ingresado es muy alto" << endl;     
        intento = (intento + 1)  ;
    }
    else if (numero = 41)
    {
        cout << "¡¡¡Felicidades adivinaste el numero!!!" << endl;     
        return 0;
    }
    else
    { 
        cout << "Ingrese un valor valido" <<endl;
    }
    }
    while (intento < 5 && numero != 41);
    cout << "Se acabaron los intentos" <<endl;

    return 0;
}