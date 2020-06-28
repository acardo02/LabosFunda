#include <iostream>

using namespace std;

float promedio(int n[]);
void arribaDebajo(int n[],int m, int& con1, int& con2);

int main() {
    int estaturas[25], pro, arriba, debajo;
    for(int i=1;i<=25;i++){
        cout<<"ingrese la estatura del estudiante "<<i<<" en centimetros: ";
        cin>>estaturas[i];
    }

    cout<<"El promedio de estaturas es: "<<promedio(estaturas)<<endl;
    pro = promedio(estaturas);
    arribaDebajo(estaturas,pro,arriba,debajo);

    cout<<"la cantidad de estudiantes arriba del promedio es: "<<arriba<<endl;

    cout<<"la cantidad de estudiantes debajo del promedio es: "<<debajo;


    return 0;
}
float promedio(int n[]){
    float promedio, suma = 0;
    for(int i=1;i<=25;i++){
        suma += n[i];
    }
    promedio = suma/25;
    return promedio;
}
void arribaDebajo(int n[], int m, int& con1, int& con2){
    con1 = 0;
    con2 = 0;
    for(int i=1;i<=25;i++){
        if(n[i]>m){
            con1++;  
        }else{
            con2++;
        }
    }
}