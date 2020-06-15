#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char palabra[40];
    cout<<"digite una palabra: ";
    cin>>palabra;

    if(palabra[0] == palabra[strlen(palabra)-1]) {
        
        cout<<"la palabra inicia y termina con la misma letra.";
    }else{

        cout<<"la palabra no inicia y termina con la misma letra ";
    }
   
    return 0;
}