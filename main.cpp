//Pablo Andrés Cotí Arredondo 1653221

#include <iostream>
using namespace std;
int main(){
  cout << "Propuesta de programa para el simposio de Ingenieria 2021\n";
  int students;
  cout << "Ingrese la cantidad de participantes que asistirán al simposio: ";
  cin >> students;
  if((students%4) == 0){
    cout << "El simposio debe ser de modalidad virual.";
  } else {cout << "El simposio debe ser en modalidad presencial";}
  return 0;
}