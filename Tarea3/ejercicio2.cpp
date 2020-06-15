#include <iostream>
#include <math.h>
#define M_PI 3.14159265358979323846

using namespace std;

int main() {

    float a;
    float x;

    cout<<"ingrese radio: ";
    cin>>a;

    x = (M_PI)*(pow(a, 2));

    cout<<x;



    return 0;
}