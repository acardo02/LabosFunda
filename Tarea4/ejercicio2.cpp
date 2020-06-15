#include <iostream>

using namespace std;

int main() {

    int x;
    cout<<"ingrese numero: ";
    cin>>x;

    if(x % 2==0){
        cout<<x<<" es un numero par";
    }else{
        cout<<x<<" es un numero impar";
    }
    return 0;
}