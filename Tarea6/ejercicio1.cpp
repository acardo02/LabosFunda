#include <iostream>

using namespace std;

int LeerArreglo(int m[], int n);


int main(){
    int cantidad,arreglo[cantidad], suma[cantidad], arreglo1[cantidad], arreglo2[cantidad];
    cout<<"ingrese la cantidad de elementos de los arreglos: ";
    cin>>cantidad;
    cout<<endl<<"primer arreglo";
            for(int i=0; i<cantidad;i++){
            cout<<endl<<"ingrese un elemento del arreglo: ";
            cin>>arreglo[i];
        }
    arreglo1[cantidad] = LeerArreglo(arreglo,cantidad);
    cout<<endl<<"segundo arreglo";
            for(int i=0; i<cantidad;i++){
            cout<<endl<<"ingrese un elemento del arreglo: ";
            cin>>arreglo[i];
        }
    arreglo2[cantidad]= LeerArreglo(arreglo,cantidad);
    
    for(int i=0;i<cantidad;i++){
        suma[i] = arreglo1[i] + arreglo2[i];
    }
    cout<<"el resultado de la suma de loa arreglos es";
    for(int i=0;i<cantidad;i++){
        cout<<" "<<suma[i];
    }

    cout<<"el resultado de la suma es: ";
    for(int i=0;i<cantidad;i++){
      cout<<suma[i]<<endl;
    }


    return 0;
}
int LeerArreglo(int m[], int n) {
    int arreglo1[n];
    for(int i=0;i<n;i++){
        arreglo1[i] = m[i];
    }
    return arreglo1[n];
}
