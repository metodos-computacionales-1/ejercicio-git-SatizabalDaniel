#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main(){
    cout << "Hola, por favor ingrese el primer número entero" << "\n";
    int num1;
    int nummayor;
    int nummenor1;
    int nummenor2;
    cin >> num1;
    cout << "Hola, por favor ingrese el segundo número entero" << "\n";
    int num2;
    cin >> num2;
    cout << "Hola, por favor ingrese el tercer número entero" << "\n";
    int num3;
    cin >> num3;
    if (((num1)>(num2))&&((num1)>(num3))){
        nummayor=num1;
        nummenor1=num2;
        nummenor2=num3;
    }
    else if (((num2)>(num1))&&((num2)>(num3))){
        nummayor=num2;
        nummenor1=num1;
        nummenor2=num3;
    }
    else if (((num3)>(num1))&&((num3)>(num2))){
        nummayor=num3;
        nummenor1=num1;
        nummenor2=num2;
    }
    if ((nummayor*nummayor)==(nummenor1*nummenor1+nummenor2*nummenor2)){
        cout<<"Los 3 números representan los lados de un triángulo rectángulo";
    }
    else {
        cout<<"Los 3 números no representan los lados de un triángulo rectángulo";
    }
}