#include <iostream>
int main()
{
   int a, b, c;
  std::cout << "Propuesta de programa para el simposio de Ingenieria 2021\n";
   

  cout<<"Ingrese la cantidad de estudiantes de la carrera de ingenieria en sistemas"<<endl;cin>>a;cout<<endl;
  cout<<"Ingrese la cantidad de estudiantes de la carrera de ingenieria industrial"<<endl;cin>>b;cout<<endl;
  cout<<"Ingrese la cantidad de estudiantes de la carrera de ingenieria civil"<<endl;cin>>c;cout<<endl;
  if (a>b & b>c){
    cout<<"El salon mayor se le asignara a la carrera de ingenieria en sistemas"<<endl;
  }
  else if (b>a & b>c){
    cout<<"El salon mayor se le asignara a la carrera de ingenieria industrial"<<endl;
  }
  else{
    cout<<"El salon mayor se le asignara a la carrera de ingenieria civil"<<endl;
  }
  std::cin.ignore();
  return 0;
}