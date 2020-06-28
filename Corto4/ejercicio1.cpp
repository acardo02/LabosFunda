#include <iostream>
#include <string.h>


using namespace std;

char codificar(char frase[50]);

int main() {
    char frase[50], largo;
    cout<<"ingrese una frase: ";
    cin.get(frase, 50);

    codificar(frase);

    cout<<frase;


    return 0;
}
char codificar(char frase[50]){
  int largo = strlen(frase);
  for(int i=0;i<largo;i++){
    switch(frase[i]){
      case 'm' : frase[i] ='0'; 
      break;
      case 'u' : frase[i] ='1';
      break;
      case 'r' : frase[i] ='2';
      break;
      case 'c' : frase[i] ='3';
      break;
      case 'i' : frase[i] ='4';
      break;
      case 'e' : frase[i] ='5';
      break;
      case 'l' : frase[i] ='6';
      break;
      case 'a' : frase[i] ='7';
      break;
      case 'g' : frase[i] ='8';
      break;
      case 'o' : frase[i] ='9';
      break;
    }
  }
}
