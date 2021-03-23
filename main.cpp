//Juan Antonio Marroquin Reyes - 1510521
#include <iostream>
#include <cstring>
int main()
{
  std::cout << "Propuesta de programa para el simposio de Ingenieria 2021\n";

  string nombre1 = nombre1, nombre2 = nombre2;
  int edad1, edad2;
    std::cout << "Por favor, ingrese el nombre del conferencista 1:\n";
    std::cin >> nombre1;
    std::cout << "Ahora ingrese la edad del conferencista 1:\n";
    std::cin >> edad1;
    std::cout << "Por favor, ingrese el nombre del conferencista 2:\n";
    std::cin >> nombre2;
    std::cout << "Ahora ingrese la edad del conferencista 2:\n";
    std::cin >> edad2;

    if (edad1 < edad2) {
      std::cout << nombre1 << "es el conferencista mas joven\n";
    }
    else {
      std::cout << nombre2 << "es el conferencista mas joven\n";
    }

  std::cin.ignore();
  return 0;
}
