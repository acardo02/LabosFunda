#include <iostream>

using namespace std;

bool bisiesto(int n);

int main() {
    int a, mes, dia;
    cout<<"ingrese a\244o: ";
    cin>>a;
    cout<<"ingrese mes: ";
    cin>>mes;
    cout<<"ingrese dia: ";
    cin>>dia;

    if(mes>=13){
        cout<<endl<<"El mes es no existe ";
    }else if(dia>=32 && (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)){
        cout<<endl<<"El dias o el mes es incorrecto";
    }else if(dia>=31 && (mes==4 || mes==6 || mes==9 || mes==11)){
        cout<<endl<<"El dia o el mes es incorrecto";
    }else if(dia>=30 && bisiesto(a)==false && mes==2){
        cout<<"El dia es incorrecto ya que el a\244o no es bisiesto";
    }

    if(dia<=30 && (mes==4||mes==6||mes==9||mes==11)||dia<=31 && (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)||dia<=29 && mes==2||dia<=28 && bisiesto(a)==false && mes==2){
        dia++;}
        if(dia==31 && (mes==4||mes==6||mes==9||mes==11)||dia==32 && (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)||dia==30 && mes==2||dia==29 && bisiesto(a)==false && mes==2){
            mes++;
            dia = 1;
            if(mes==13){
                mes = 1;
                a++;
            }
        }

    cout<<endl<<"Su fecha despues de un dia es "<<dia<<"/"<<mes<<"/"<<a;
    return 0;
}
bool bisiesto(int n) {
    if(n % 400 == 0){
        return true;
    }else if(n % 4 == 0 && n % 100 != 0){
        return true;
    }else{
        return false;
    }
}