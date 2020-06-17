#include <iostream>

using namespace std;

bool bisiesto(int n);

int main() {
    int a;

    cout<<"ingrese el a\244o: ";
    cin>>a;
    if(bisiesto(a) == true) {
        cout<<endl<<"El a\244o "<<a<<" es bisiesto";
    } else if(bisiesto(a) == false) {
        cout<<endl<<"El a\244o "<<a<<" no es bisiesto";
    }
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
