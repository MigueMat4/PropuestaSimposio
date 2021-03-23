// Diego José Abdo Estrada - 1625021
#include <iostream>

using namespace std;

int main()
{

	int x;
	cout << "Cuanto estudiantes van a participar en el simposio?" << endl;
	cin >> x;

	if (x % 4 == 0) {
		cout << "Se hara de manera virtual" << endl;
	}
	else
	{
		cout << "Se hará de manera presencial" << endl;
	}

	system("Pause")
}