#include <iostream>
using namespace std;

int main() {
	long x = 0;
    long y = 1;
    long z;
	long suma = 0;
	for (int i = 1; y < 4000000; i++) { 
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0) {
			suma += z;
		}
	}
	cout << "\nLa suma total es: " << suma << endl;

	return 0;
}