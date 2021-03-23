#include <iostream>
int main()
int estudiantes;

{
  std::cout << "Propuesta de programa para el simposio de Ingenieria 2021\n";
  std::cin.ignore();
  cout << "Ingrese la cantidad de estudiantes";
  cin >> estudiantes;
  if (estudiantes % 4 == 0) {
	  cout << "presencial";
  }
  else { cout << "virtual"; }
  return 0;
}