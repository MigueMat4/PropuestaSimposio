//Diego Alejandro Navichoque Perez - 1663721
#include <iostream>
int main()
{
  std::cout << "Propuesta de programa para el simposio de Ingenieria 2021\n";
  std::cin.ignore();
  string talker[2]; int age[2]; bool check;
  for (int i = 0; i < 2; i++) {
      cout << "Ingrese el nombre de su conferecista " << i + 1 << ": "; cin >> talker[i];
      do {
          cout << "\nIngrese la edad de su conferencista " << i + 1 << ": "; cin >> age[i];
          if (age[i] <= 0) {
              cout << "Debe ser una edad real!\n";
              check = false;
          }
          else { check = true; }
      } while (check == false);
  return 0;
}