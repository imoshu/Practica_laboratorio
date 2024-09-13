#include <iostream>
using namespace std;
int main() {
    unsigned n;
    cout << "Introduce un numero entero positivo: ";
    cin >> n;
    
    if (n <= 1) {
        cout << "No hay números primos menores que " << n << ".\n";
    }
    
    cout << "Números primos menores que " << n << " son:\n";
    
    int i = 2;
    while (i < n) {
        bool esPrimo = true;
        
        int divisor = 2;
        while (divisor < i) {
            if (i % divisor == 0) {
                esPrimo = false;
                break;
            }
            ++divisor;
        }
        
        if (esPrimo) {
            cout << i << " ";
        }
        
        ++i;
    }
    
    cout <<endl;
    
    return 0;
}
