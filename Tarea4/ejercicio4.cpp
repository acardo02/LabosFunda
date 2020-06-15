#include <iostream>
#include <string.h>

using namespace std;

int main() {
    
  char x[40];
  cout<< "ingrese una palabra: ";
  cin>>x;
  cout<< "su palabra es de "<<strlen(x)<<" caracateres de longitud"<<endl;

  if(strlen(x)>10) {
    cout<<"la palabra tiene mas de 10 caracteres "<<endl;
  }else if(strlen(x)==10) {
    cout<<"la palabra es de 10 caracteres"<<endl;
  }else{
    cout<<"la palabra tiene menos de 10 caracteres "<<endl;
     
  }
  
  if(strlen(x) % 2 == 0) {
  cout<<"el numero de caracteres es par ";
  }else{
    cout<<"el numero de caracteres es impar";
  }
   

    return 0;
}