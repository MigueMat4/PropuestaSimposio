#include <iostream>
using namespace std;
int main()
{
  std::cout << "Propuesta de programa para el simposio de Ingenieria 2021\n";
  std::cin.ignore();

  char nombre1, nombre2;
  int edad1, edad2;

  cout << "bienvenidos a la encuesta" << endl;
  cout << "Primerparticipante "<< endl;
  cout << "Ingrese su nombre: ";
  cin >> nombre1;
  cout << "ingrese su edad: ";
  cin >> edad1;
  cout << "segundo participante"<< endl;
  cout << "Ingrese su nombre: ";
  cin >> nombre2;
  cout << "ingrese su edad: ";
  cin >> edad2;

  if (edad1 > edad2)
  {
    cout << "felicidades " << nombre1 << "eres mas alto que el enano de " << nombre2 << endl;
  }
  else
  {
    cout << "felicidades " << nombre2 << "eres mas alto que el enano de " << nombre1 << endl;
  }
  return 0;
}