//Anderson Omar Noe Hernandez de Leon 1512321
#include <iostream>
int main()
{
	char nombre;
	char nombre2;
	int edad, edad2;
  std::cout << "- Propuesta   de programa para el simposio de Ingenieria 2021-\n";
  std::cout << "Debe ingresar su nombre para el primer joven \n";
  std::cin >> nombre;
  std::cout << "Debe ingresar su edad  \n";
  std::cin >> edad;
  std::cout << "Debe ingresar su nombre para el segundo joven  \n";
  std::cin >> nombre2;
  std::cout << "Debe ingresar su edad  \n";
  std::cin >> edad2;

  if (edad < edad2)
  {
	  std::cout << nombre << "es el mas joven \n";
  }
  else
  {
	  std::cout << nombre2 << "es el mas joven \n";
  }

  std::cin.ignore();
  return 0;
}