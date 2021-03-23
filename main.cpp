#include <iostream>
int main()
{
  std::cout << "Propuesta de programa para el simposio de Ingenieria 2021\n";
  // Daniela Rodas - 1652421 
#include <iostream>

using namespace std;

int main () {
 
	int C1, C2, C3;
	cout << "Ingrese la cantidad de asistentes para Ingenieria en sistemas:";
	cin >> C1;
	cout << "Ingrese la cantidad de asistentes para Ingenieria Industrial:";
	cin >> C2;
	cout << "Ingrese la cantidad de asistentes para Ingenieria Civil:";
	cin >> C3;

	if (C1 > C2 && C1 > C3) {
		cout << "A la carrera de Ingenieria en sistemas se le asignara el salon mayor";
	}
	else if (C2 > C1 && C2 > C3) {
		cout << "A la carrera de Ingenieria Industrial se le asignara el salon mayor";
	}
	else if (C3 > C1 && C3 > C2) {
		cout << "A la carrera de Ingenieria Civil se le asignara el salon mayor ";
	}

}
  std::cin.ignore();
  return 0;
}
