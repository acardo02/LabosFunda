#include <iostream>

using namespace std;

int main() {

    int num1, num2, resultado;
    cout<<"ingrese el dividendo: ";
    cin>>num1;
    cout<<"ingrese el divisor: ";
    cin>>num2;

    if(num1 % num2==0){
        resultado = num1/num2;
        cout<<"sus numeros sin son divisibles y el resultado de su division es: "<<resultado;
    }else{
        cout<<"su numero no es divisible por el otro";
    }


    
    return 0;
} 