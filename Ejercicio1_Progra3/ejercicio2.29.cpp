#include<iostream>
#include<math.h>

using std::cout;
using std::endl;

int main() {
	/*programa que calcula los cuadrados y cubos de los enteros del 0 al 10
	utilizar tabuladores para imprimir la siguiente tabla ordenada de valores*/

	cout << "Entero\tCuadrado\tCubo" << endl;
	for (int i = 0; i <= 10; i++) {
		cout << i << "\t" << pow(i, 2) << "\t\t" << pow(i, 3) << endl;
	}



	return 0;
}