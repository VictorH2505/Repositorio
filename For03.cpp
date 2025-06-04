// Suma de naturales: Solicita un numero N al usuario y calcula la suma de los primeros N números naturales.
#include <iostream> 
using namespace std;

int main(){
    int n;
    int natural = 1;
    int s = 0;
    cout << "Este programa suma los primeros n numeros naturales" <<endl;
    cout << "Ingrese cuantos numeros quiere sumar" <<endl;
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "la suma de los primeros "<< i + 1 << " numeros es: " << (natural + s) <<endl;
        s = s + 1;
        natural = (natural + s);
    }
    return 0;
}