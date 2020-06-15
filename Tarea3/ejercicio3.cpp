#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int a, b, c;
    float x;

    cout<<"ingrese a: ";
    cin>>a;
    cout<<"ingrese b: ";
    cin>>b;
    cout<<"ingrese c: ";
    cin>>c;

    x = (-b + sqrt(pow (b, 2) - 4*a*c))/(2*a);

    cout<<x;

    return 0;
}