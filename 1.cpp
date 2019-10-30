#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main(){
    float pi = 2.0*asin(1.0);
    cout << "Hola, por favor ingrese el radio del círculo" << "\n";
    int radio;
    cin >> radio;
    cout <<"El diámetro es:"<<radio*2<<endl;
    cout<<"El perímetro es:"<<2*pi*radio<<endl;
    cout<<"El área es:"<<pi*radio*radio<<endl;
}