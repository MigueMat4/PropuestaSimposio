//Josue Alejandro Yaquian Sarceño - 2350721
#include <iostream>
using namespace std;
int main(){

  int sis, civ, ind;

  cout << "Asistentes de Ingenieria en Sistemas: ";
  cin >> sis;
  cout << "Asistentes de Ingenieria Civil: ";
  cin >> civ;
  cout << "Asistentes de Ingenieria Industrial: ";
  cin >> ind;

  if (sis > civ && ind){
    cout << "El salon mayor es para: Ingenieria en sistemas.";
  }
  else if (civ > sis && ind){
    cout << "El salon mayor es para: Ingenieria civil.";
  }
  else if (ind > sis && civ){
    cout << "El salon mayor es para: Ingenieria industrial.";
  }
  std::cin.ignore();
  return 0;
}