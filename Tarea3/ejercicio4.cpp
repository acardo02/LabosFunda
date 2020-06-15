#include <iostream>

using namespace std;

int main() {

    string a;
    float b, c, x;

    cout<<"ingrese nombre del producto: ";
    cin>>a;
    cout<<"ingrese cantidad comprada: ";
    cin>>b;
    cout<<"ingrese precio del producto: ";
    cin>>c;

    x = b*c;

    cout<<"Su valor total gastado es: "  <<x;


    return 0;
}