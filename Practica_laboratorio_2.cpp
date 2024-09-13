#include <iostream>
using namespace std;

int main() {
    int usuario;
    cout << "Ingrese su numero: ";
    cin >> usuario;
    int i;
    for (i=1; i<=usuario;i+=2) {
        cout << i;
        if (i + 2 <= usuario) {
            cout<<",";
        }
    }
}
