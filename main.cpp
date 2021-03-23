// Miguel Alfonzo Macario Velasquez 1597421
#include <iostream>

int main()
{
	int estudiantes;
	int nombre1, nombre2, edad1, edad2;

  std::cout << "Propuesta de programa para el simposio de Ingenieria 2021\n";
  
  std::cout << "Ingrese la cantidad de estudiantes que asistiran al simpocio" << std::endl;
  std::cin >> estudiantes;

  if (estudiantes % 4 == 0)
  {
	  std::cout << "El simpocio se debe realizar de modalidad virtual." << std::endl;
  }
  else
  {
	  std::cout << "El simpocio se debe realizar de manera presencial." << std::endl;
  }

  std::cout << "Ingrese el nombre y edades de los dos conferencistas " << std::endl;
  std::cout << "Ingrese el nombre del primer conferencista" << std::endl;
  std::cin >> nombre1;
  std::cout << "Ingrese la edad del primer conferencista" << std::endl;
  std::cin >> edad1;
  std::cout << "Ingrese el nombre del segundo conferencista" << std::endl;
  std::cin >> nombre2;
  std::cout << "Ingrese la edad del segundo conferencista" << std::endl;
  std::cin >> edad2;


  std::cin.ignore();
  return 0;
}