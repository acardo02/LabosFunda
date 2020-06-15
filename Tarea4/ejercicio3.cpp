#include <iostream>

using namespace std;

int main() {

    int x;
    cout<<"ingrese el numero: ";
    cin>>x;

    if(x>0) {
        cout<<x<<" es un numero positivo";
    } else if(x<0){
        cout<<x<<" es un numero negativo";
    } else {
        cout<<"su numero es cero";
    }

    return 0;   
}