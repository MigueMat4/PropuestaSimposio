// Sebastian Pereira - 
#include <iostream>
int main()
{
	int x, y, x;
	cout << "Cuantos asistentes habran en Civil" << endl;
		cin >> x;
	cout << "Cuantos asistentes habran en sistemas" << endl;
		cin >> y;
	cout << "Cuantos asistentes habran en Industrial" << endl;
		cin >> z;


	if (x > y && x > z)
	{
		cout << "A civil se le asignara el salon mayor" << endl;
	}
	if (y >x && y > z)
	{
		cout << "A Sistemas se le asignara el salon mayor" << endl;
	}
	if (z > y && z > x)
	{
		cout << "A Industrial se le asignara el salon mayor" << endl;
	}
}