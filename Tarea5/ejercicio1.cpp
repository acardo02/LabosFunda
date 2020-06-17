#include <iostream>

using namespace std;

int MCD(int n, int m);

int main() {
    int num1, num2;

    cout<<"ingrese el primer numero :";
    cin>>num1;
    cout<<endl<<"ingrese el segundo numero :";
    cin>>num2;

    cout<<endl<<"el MCD de ambos numeros es: "<<MCD(num1,num2);

    return 0;
}

int MCD(int n, int m) {
    int residuo, mcd, mayor, menor;
    
    if(n < m){
        menor = n;
        mayor = m;
    }else if(n > m){
        mayor = n;
        menor = m;
    }

        do {
            mcd = menor;
            residuo = mayor % menor;
            mayor = menor;
            menor = residuo;
            

        }while(residuo != 0);
            
        return mcd;
    }

