#include <iostream>

using namespace std;

int main() {

    int veces, numero, repeticion;
    repeticion = 0;

    cout<<"cuantos numeros escribira en el arreglo: ";
    cin>>veces;
    int arreglo[veces];
    cout<<endl<<"ingrese el arreglo"<<endl;
    for(int i=0; i<=veces; i++) {
        cout<<endl<<"ingrese el numero: ";
        cin>>arreglo[i];
    }
    cout<<"ingrese el numero que quiere saber cuantas veces se repite ";
    cin>>numero;

    for(int i=0; i<=veces; i++) {
        if(numero == arreglo[i])
        repeticion++;
    }
    cout<<"El numero "<<numero<<" se repite "<<repeticion<<" veces.";
    return 0;
}