//Fernanda Maria Galvez Cifuentes carnet: 1635421
#include <iostream>
using namespace std;

int main()
{
	//Propuesta de programa para el simposio de Ingenieria 2021
	int num;
	cout << "Cuanto estudiantes van a participar en el simposio?" << endl;
	cin >> num;

	if (num % 4 == 0) {
		cout << "Lo estara haciendo de manera virtual" << endl;
	}
	else
	{
		cout << "Lo estara haciendo de manera presencial" << endl;
	}

	system("Pause")
}