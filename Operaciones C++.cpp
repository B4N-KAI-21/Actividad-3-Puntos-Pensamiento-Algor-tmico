/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Ingrese el primer digito: ";
    cin >> a;
    cout << "Ingrese el segundo digito: ";
    cin >> b;

    if (a == 0 || b == 0) {
        cout << "Error, los digitos no pueden ser cero." << endl;
        return 0;
    }

    cout << "suma: " << a + b 
         << ", resta: " << a - b 
         << ", multiplicacion: " << a * b 
         << ", division: " << a / b 
         << ", residuo: " << static_cast<int>(a) % static_cast<int>(b) << endl;

    return 0;
}